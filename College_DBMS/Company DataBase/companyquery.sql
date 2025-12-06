use company;
desc emp;
desc dept;
desc dependent;
desc workson;
desc project;
select * from emp;

#1. Retrive the name of all employees whose name is start with 'n' and end with 'j'.
select fname,lname
from emp
where fname LIKE 'n%j';

#2. Retrive the names of all employees exactly Five characters.
select fname,lname
from emp
where fname like "_____";

#3. Retrive the names of all employees atleast 3 characters.
select fname,lname
from emp
where fname like "___%";

#4. Retrive the names of all employees whose name starts with 'R' and each name atlest 4 characters.
select fname,lname
from emp
where fname like "r___%";

#5. Retrive the Distnict names of employess.
select distinct fname from emp;

#6. Retrive the details of employees whose salary is between 40000 and 50000.
-- between : Between includes upper and lower values also 40000 and 50000 also arise
select * from emp

-- or --
select * from emp 
where salary > 40000 and salary < 50000;

#7. Retrive the employees who are highest paid for each department.
select dno, MAX(salary)
from emp
group by dno;

#8. Retrive the minimum salary and no.of employees for each department. 
select dno, MIN(salary), count(*) as NoOfEmployees
from emp
group by dno;

#9. Retrive the name and address of employee who are working in for Machine Learning Department.
select fname,lname,address
from emp,dept
where dname = "Machine Learning" AND dno = dnumber;

#10. For each employee Fname,Lname, and Fname,Lname of his/her immediate supervisor.
select e.fname,e.lname,s.fname,s.lname
from emp e,emp s
where e.sssn = s.ssn;

#11. Retrive the names of employee who don't have supervisor.
select fname,lname
from emp
where sssn is null;

#12. Retrive the name of each employees who has dependent with same first name and same gender.
select fname,lname
from emp e,dependent d
where e.ssn = d.essn AND e.fname = d.dep_name AND e.sex = d.sex;

#13. Retrive the name of employee who has no dependence. 
select fname,lname
from emp left outer join dependent on ssn=essn
where essn is null;



#14. Retrive all employee and their supervisor name if they exist otherwise NULL (Left outer Join)
select e.fname,e.lname,s.fname,s.lname
from emp e LEFT OUTER JOIN emp s on e.sssn = s.ssn;


#15. For each department retrive dno, no.of employees and their average salary.
select dno, count(*) as noOfEmp, avg(salary) 
from emp
group by dno;

#16. For each project retrive pno,pname,no.of employees who workson.
select pno,pname,count(*)
from workson, project 
where pno = pnumber
group by pnumber;