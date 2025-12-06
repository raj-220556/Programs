create database sailor;
use sailor;

create table sailor(
   sid int primary key,
   sname varchar(40) not null,
   sage int,
   address varchar(50),
   sex char check(sex = 'F' or sex = 'M'),
   salary real,
   srating int check(srating >= 1 AND srating <= 10));

desc sailor;

create table boat(
   bid int primary key,
   bname varchar(50) unique,
   bcolor varchar(40));
desc boat;
   
create table reserves(
	sid int,
    bid int,
    rday date,
    primary key(sid,bid),
    foreign key(sid) references sailor(sid),
    foreign key(bid) references boat(bid));
desc reserves;

## Insertion of values 
-- sailor table
insert into sailor values
(101,"kiran",35,"HYD",'M',30000, 8.5),
(102,"balu", 28,"Vijayawada",'M',30000,9),
(103,"rani",33,"srikakulam",'F',29000,7.9),
(104,"latha",27,"HYD",'F',37000,10),
(105,"Ramya",20,"Vijayawada",'F',10000,1),
(106,"Lokesh",28,"HYD", "M",19000,3),
(107,"kiran",29,"Vijayawada","M",32000,6);
select * from sailor;

desc boat;
insert into boat values
 (201, "RightKing", "red"),
 (202, "sundayfun", "blue"),
 (203, "MidSea" , "blue"),
 (204, "starfish", "yellow"),
 (205, "sharkbattle", "red");
 select * from boat;
 
 desc reserves;
 insert into reserves values
 (103,205,curdate()),
 (101,201,curdate()-1),
 (102,202,curdate()-1),
--  (102,202,curdate()), duplicate entry
 (105,203,curdate()-2);
 select * from reserves;
 
    