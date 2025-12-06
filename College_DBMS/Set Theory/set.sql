 use sailor;
 use company;
 select * from sailor;
 select * from boat;
 select * from reserves;
 
 
 
 -- set theory operations
 # 1. UNION
 
 #a. Retrive the Names of sailor who reserves a red boat or blue boat
 select s.sname
 from sailor s,reserves r,boat b
 where s.sid=r.sid AND r.bid=b.bid AND b.bcolor="red"
 union
 select s.sname
 from sailor s, reserves r, boat b
 where s.sid=r.sid AND r.bid=b.bid AND b.bcolor="blue";
 
 # b.Make a List of all project numbers that involves an emplyee whose name is chakarapani either as a workers
 #  or as a manager of department that controlls the project
 select w.pno
 from emp e, workson w
 where e.ssn=w.essn AND e.fname="chakarapani"
 union
 select p.pnumber
 from emp e, dept d, project p
 where e.ssn=d.mgrssn AND d.dnumber=p.dno AND e.fname = "chakarapani";
 
 # 2. Intersection
 
 # a. Retrive the names of sailors who reserves both red and blue both
 select s.sname
 from sailor s, reserves r, boat b, reserves r1, boat b1
 where s.sid=r.sid AND r.bid=b.bid AND s.sid=r1.sid AND r1.bid=b1.bid AND b.bcolor="red" AND b1.bcolor="blue";
 
 
 # 3. Minus 
  
# a. Retrive the names of sailors who reserve red boat but not blue boat
select sname
from sailor
where sid in( select r.sid
			  from reserves r, boat b
              where r.bid=b.bid AND b.bcolor = "red"
			)
	 AND sid NOT in( select r1.sid
					 from reserves r1, boat b1 
                     where r1.bid=b1.bid AND b1.bcolor = "blue"
                     );
                     
                     

# 4. Cross Product

select sname,bname
from sailor cross join boat;

 
 -- Aggregation operations
 # SUM
 # a. How much salary paying for each department to the employees
 select dno,sum(salary) 
 from emp
 group by dno;

 # Min 
 # a. 
 
select srating, sname, sage
from sailor
where (srating, sage)in (select srating, Min(sage)
from sailor
group by srating);
 

 # Max
 # Average
 
 -- set comparision operations
 # In
 # NotIn
 # Exist
 # Not Exist
 # Any
 # ALL
 
 

 