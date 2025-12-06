create database company;
use company;
show databases;

# COMMENT
-- COMMENT

-- Creating Employee Table
create table emp(
	fname varchar(40) NOT NULL,
    lname varchar(40) NOT NULL,
    ssn int Primary key,
    age int,
    sex char check(sex = 'F' Or sex = 'M'),
    salary real,
    address varchar(100),
    dno int NULL,
    sssn int,
    foreign key(sssn) references emp(ssn)
);

create table dept(
	dname varchar(30) unique,
    dnumber int Primary key,
    mgrssn int,
    sdate date,
    FOREIGN KEY(mgrssn) references emp(ssn)
);

ALTER TABLE emp ADD foreign key(dno) references dept(dnumber);

create table project(
	pname varchar(40),
    pnumber int primary key,
    dno int,
    foreign key(dno) references dept(dnumber)
);

 create table proj_loc(
	plocation varchar(40),
    pno int,
    foreign key (pno) references project(pnumber),
    primary key(plocation,pno)
 );
 
create table workson(
	essn int,
    pno int,
    hours int,
    primary key(essn,pno),
    foreign key(essn) references emp(ssn),
    foreign key(pno) references project(pnumber)
);

create table dependent(
	essn int,
    dep_name varchar(40),
    relation varchar(40),
    age int,
    
    primary key(essn,dep_name),
    foreign key(essn) references emp(ssn)
);

alter table dependent add column sex char check(sex = 'F' or sex = 'M');
####### Inserting Table Values #########

-- employee table
desc emp;
insert into emp(fname,lname,ssn,age,sex,salary,address)
values("raj","kumar",101,20,'M',30000,"NTR dist"),
    ("swathi","kappula",102,18,'f',23000,"srikaulam"),
    ("chakarapani","behara",103,19,'M',50000,"vizag"),
    ("digambar","naidu",104,19,'M',45000,"vizag"),
    ("neeraj","naidu",105,17,'M',35000,"srikakulam"),
    ("nikhil","naidu",106,17,'M',35000,"srikakulam"),
    ("neeraj","baditya",107,20,'M',15000,"kurnool"),
    ("nagaraj","bhukya",108,22,'M',28000,"guntur"),
    ("keshava","chinna",109,16,'M',55000,"nelore"),
    ("swapna","chintala",110,18,'f',29000,"NTR dist"),
    ("mounika","naidu",111,19,'f',30000,"kadapa"),
    ("priya","behara",112,20,'f',40000,"chitoor"),
    ("lavanya","bhukya",113,18,'f',37000,"guntur"),
    ("ramana","naidu",114,26,'M',55000,"Nuzvid");
select * from emp;

-- dept table
desc dept;
insert into dept(dname,dnumber,mgrssn,sdate)
values ("Machine Learning", 1001,104, "2024-11-01"),
	   ("Data science", 1002, 109, "2024-10-01"),
       ("Web developer", 1003, 103, "2024-08-01"),
       ("Cyber Security", 1004, 101, "2024-12-31");
       
select * from dept;

#### Updating values in employee table

update emp set dno = 1004 where ssn = 101;
update emp set dno = 1001 where ssn = 104;
update emp set dno = 1002 where ssn = 109;
update emp set dno = 1003 where ssn = 103;

update emp set dno = 1001, sssn = 104 where (ssn = 102 or ssn = 107 or ssn = 110);
update emp set dno = 1002, sssn = 109 where (ssn = 108 or ssn = 111 or ssn =114);
update emp set dno = 1003, sssn = 103 where (ssn = 105 or ssn = 112 or ssn = 113);
update emp set dno = 1004, sssn = 101 where (ssn = 106);

select * from emp;

show tables;

-- project table
desc project;
insert into project values
 ("computer vision",301,1001),
 ("health analysis",302,1002),
 ("diabetics prediction",303,1001),
 ("Keylogger",304,1004),
 ("Dynamic UI",305,1003);
 select * from project;
 -- project location table
 insert into proj_loc values
	("HYD",301),
    ("Bangalore",301),
    ("HYD",302),
    ("vijayawada",301),
    ("vijayawada",303);
    
 select * from proj_loc;
 -- dependent table
desc dependent;
insert into dependent values
  (105,"kiran", "son", 10,'M'),
  (104, "Likitha", "sister",25,'F'),
  (107, "Bharath", "nephew", 12, 'M'),
  (112,"priya","nephew",10,'F'),
  (110, "leela", "son", 13, 'M');
 select * from dependent;
 -- workson table
desc workson;
insert into workson values
 (101,304,8),
 (103,305,10),
 (104,301,6),
 (109,301,6),
 (104,303,6),
 (109,304,6);
 select * from workson;
show tables;
