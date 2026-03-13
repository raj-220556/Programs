create database sailors;
use sailors;
create table sailor(
   sname varchar(20),
   sid int primary key,
   srating int,
   sage int,
   saddress varchar(40)
   );
create table boat(
	bname varchar(30),
    bid int primary key,
    bcolor varchar(20)
    );
create table reserve(
	sid int,
	bid int,
	dayy varchar(20),
 primary key(sid,bid,dayy) ,
 foreign key(sid) references sailor(sid),
 foreign key(bid) references boat(bid)
 );
 insert  into sailor(sname,sid,srating,sage,saddress)
 values 
 ("pooji",929,11,18,"vizianagaram"),
 ("venu",723,11,7,"karimnagara"),
 ("siri",930,6,22,"nuz"),
 ("raju",623,10,19,"vizag"),
 ("navya",963,11,10,"mum"),
 ("moni",900,11,12,"paris"),
 ("kali",600,11,13,"paris");

insert  into boat(bname,bid,bcolor)
values
("#103",1064,"red"),
("#104",1000,"green"),
("#105",1001,"red"),
("#106",103,"red");

insert  into reserve(sid,bid,dayy)
values
(929,1064,"sunday"),
(930,1000,"mon"),
(623,1000,"sat"),
(930,1001,"tue"),
(600,103,"sun");

show tables;
select avg(sage)
from sailor
group by srating
having count(*)>=2;
-- second one
select sname 
from(select * ,dense_rank() over(order by srating desc)as rnk from sailor)t
where t.rnk=1 limit 5;

select sid
from sailor
where srating>=8
union
select sid 
from sailor
where sid in (select sid 
				from reserve
                where bid=103);
-- third one
select sid 
from sailor 
where sid in (select sid 
				from reserve ,boat 
                where bid=bid and bcolor="red")
union

select sid 
from sailor 
where sid in (select sid 
				from reserve ,boat 
                where bid=bid and bcolor<>"green");
  
  
  
select sname 
from sailor 
where sage between 20 and 30;

 
