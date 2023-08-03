DESC EMP;
DESC DEPT;
DESC SALGRADE;
SELECT * FROM EMP;
SELECT * FROM DEPT;
SELECT * FROM SALGRADE;

-- 1. Display all the information of the EMP table?
SELECT * FROM EMP;

--2. Display unique Jobs from EMP table? 
SELECT DISTINCT job FROM EMP;

--3.  List the employees who joined before 1981
SELECT * FROM EMP WHERE hiredate < '01-01-1981';

--4.  List the employees who are working for the Deptno 10 or20.
SELECT * FROM EMP WHERE deptno = 10 OR deptno = 20;

--5. List all the Clerks of Deptno 20
SELECT * FROM EMP WHERE JOB = 'CLERK' AND deptno = 20;

--6.  Display the details of SMITH. 
SELECT * FROM EMP WHERE ename = 'SMITH';

--7. . Display the location of SMITH
SELECT loc FROM dept WHERE deptno = (SELECT deptno FROM emp WHERE ename = 'SMITH');

--8. List the employees whose salary is more than 3000 after giving 20% increment.
SELECT ename FROM EMP WHERE sal*0.2+sal > 3000;

--9.  List the grade, EMP name for the deptno 10 or deptno 30 but salary grade is 
-- not 4 while they joined the company before ’31-dec-82’. 
SELECT grade, hiredate, ename, deptno, sal FROM emp INNER JOIN salgrade
ON sal BETWEEN losal AND hisal WHERE deptno IN(10,30) AND grade!=4 
AND hiredate < '31-dec-82' ;

--10 List the employees those who joined in company before 15th of the month. 
SELECT ename,hiredate FROM emp WHERE  TO_CHAR (hiredate, 'DD') <15;

--11.  List the employees who are working as Managers.
SELECT ename FROM emp WHERE job = 'MANAGER';

--12. List the Ename and Salary is increased by 15% and expressed as no.of Dollars. 
SELECT ename, sal, 0.0122 *(sal+((sal*15)/100)) AS "salary in dollar" FROM emp;

--13.  Produce the output of EMP table ‘EMP_AND_JOB’ for Ename and Job. 
SELECT CONCAT (ename, CONCAT ('_AND_',job)) FROM emp;

--14. Produce the following output from EMP.
--LOYEE  
--SMITH (clerk)  
--ALLEN (Salesman) 


--15. Display the unique department with jobs.
SELECT DISTINCT deptno,job FROM emp;

--16.  Display the details of the Blake. 
 SELECT empno, ename, job, mgr, hiredate, sal, comm, emp.deptno, dname, loc, grade
 FROM emp INNER JOIN dept ON emp.deptno = dept.deptno 
INNER JOIN salgrade ON sal BETWEEN losal AND hisal WHERE ename = 'BLAKE';

--17.  List all the clerks
SELECT ename, JOB FROM emp WHERE job = 'CLERK';

--18.  List the empno, salary, commission of employees.  
SELECT ename, empno, sal, comm FROM emp;

--19. . Display the unique department of the employees. 
SELECT DISTINCT deptno FROM emp;

--20.  List all the employees joined on 1st may 81. 
SELECT ename, hiredate FROM emp WHERE hiredate = '01-05-81';

--21.  List the employees who are working as managers.
SELECT ename, job FROM emp WHERE job = 'MANAGER';

--22.  List the employees who are either clerks or managers.
SELECT ename FROM emp WHERE job IN ('CLERK','MANAGER');

--23. List the employees who have joined on the following dates 1 may 81,17 Nov 81,30 Dec 81 
SELECT ename, hiredate FROM emp WHERE hiredate IN('01-05-81','17-11-81','30-12-81');

--24.  List the employees who have joined in the year 1981.
SELECT ename, hiredate FROM emp WHERE TO_CHAR (hiredate, 'YYYY') = 1981;

--25.  List the employees whose annual salary ranging from 23000 to 40000. 
SELECT ename, sal*12 FROM emp WHERE sal*12 BETWEEN 23000 AND 40000;

--26.  List the employees working under the Managers 7698,7782,7566,7900. 
SELECT ename FROM emp WHERE mgr IN (7698,7782,7566,7900);

--27. List the employees who joined in the second half of 82. 
SELECT ename, hiredate FROM emp WHERE hiredate > '31-05-1982' AND hiredate < '31-12-82';

--28.  Find out salary of both MILLER and SMITH
SELECT ename, sal FROM emp WHERE ename IN ('MILLER', 'SMITH');

-29.  Find out the names and salaries of all employees earning more than 1000 per month. 
SELECT ename, sal FROM emp WHERE sal >1000;

--30.  Display the names and salaries of all employees except JAMES
SELECT ename, sal FROM emp WHERE ename != 'JAMES';

--31. Display all the details of the employees whose Comm. Is more than their Salary.  
SELECT empno, ename, job, mgr, hiredate, sal, comm, emp.deptno, dname, loc,grade 
 FROM emp INNER JOIN dept ON emp.deptno = dept.deptno INNER JOIN salgrade on sal 
 BETWEEN losal AND hisal WHERE  comm > sal;
 
 --32.  List the employees Who Annual salary ranging from 22000 and 45000.  
SELECT ename FROM emp WHERE (sal*12) BETWEEN 22000 AND 45000;

--33.  List the employee’s name, job that is without manager. 
SELECT ename, job FROM emp WHERE job != 'MANAGER';

--34.  List the employee names starting with ‘M’.
SELECT ename FROM emp WHERE ename LIKE 'M%';

--35.  List the employees end with ‘H’.
SELECT ename FROM emp WHERE ename LIKE '%H';

--36.  List the employees who joined in the year 81. 
SELECT ename, hiredate FROM emp WHERE hiredate BETWEEN '01-01-81' AND '31-12-81';

--37. List the employees whose salary is ending with 00
SELECT ename, sal FROM emp WHERE sal LIKE '%00';

--38.  List the employee who joined in 80’s. 
SELECT ename, hiredate FROM emp WHERE hiredate BETWEEN '01-01-1980' AND '31-12-1989';

--39.  List the employee who are clerks who have experience more than 8ys.
SELECT ename, hiredate, floor (MONTHS_BETWEEN (sysdate,hiredate)/12) AS "Experience"
FROM emp WHERE job = 'CLERK' AND floor (MONTHS_BETWEEN (sysdate,hiredate)/12) >8; 

--40. List the Managers of dept 10 or 20
SELECT ename, job, deptno FROM emp WHERE job = 'MANAGER' AND deptno IN 
(SELECT deptno FROM emp WHERE deptno = 10 OR deptno = 20);

--41. Find out the details of employees whose names begin with ‘S’.
SELECT * FROM emp WHERE ename LIKE 'S%'

--42. Find out the names of all employees that have ‘A’ anywhere in their name. 
SELECT ename FROM emp WHERE ename LIKE '%A%';

--43.Find out the names of all employees that have ‘L’ as their third character in their name. 
SELECT ename FROM emp WHERE ename LIKE '__L%';

--44.  Find out the names of the employees whose name begin with ‘A’ or ‘M’.
SELECT ename FROM emp WHERE ename LIKE 'A%' OR ename LIKE 'M%';

--45. Select the name, job, salary, department number of all employees except SALESMAN from department number 30
SELECT ename, job, sal, deptno  FROM emp WHERE job != 'SALESMAN' OR deptno != 30;

--46. List unique departments of the EMP table. 
SELECT DISTINCT deptno FROM emp;

--47. List the name and salary of employees who can earn more than 1500 and are in 
--department 10 or 30. Label the columns Employee and Monthly Salary respectively
SELECT ename Employee, sal AS "Monthly Salary" FROM emp WHERE sal > 1500 AND deptno IN 
(SELECT deptno FROM emp WHERE deptno IN (10,30));

--48.  List the name and salary for all employees whose salary is not in the range of 1500 and 2850. 
SELECT ename, sal FROM emp WHERE  sal NOT BETWEEN 1500  AND 2850;

--49.  Display the name and job of all employees who do not have a MANAGER
SELECT ename, job, mgr FROM emp WHERE mgr NOT IN(7698, 7782, 7566);

--50.  Display the name, job, and salary of all the employees whose job is MANAGER or ANALYST and their salary is not equal to 1000, 3000, or 5000.
SELECT ename, job, sal FROM emp  WHERE job IN ('MANAGER', 'ANALYST') AND sal NOT IN (1000,3000,5000);

--51.  Display the name, salary and commission for all employees 
--whose commission amount is greater than their salary increased by 10% 
SELECT ename, sal, comm FROM emp WHERE comm > (sal+(sal*0.1));

--52. . Display the name of all employees who have two Ls in their name and are in department 30 
--or their manager is 7782. 
SELECT ename FROM emp WHERE ename LIKE '%LL%' AND deptno = 30 OR mgr = '7782';

--53. . Compute yearly salary of SMITH.
SELECT ename, sal, sal*12 AS "Yearly Salary" FROM emp WHERE ename = 'SMITH'

--54.  Compute daily salary of JONES
SELECT ename, sal, sal/30 AS "Daily Salary" FROM emp WHERE ename = 'JONES';

--55.  Calculate the total monthly salary of all employees. 
SELECT sum(sal) FROM emp;

--56.  Print the average annual salary. 
SELECT round((sum(sal)*12)/(count(sal))) AS "Average Annual Salary "FROM emp;

--57.  List those Employees whose Salary is odd value. 
SELECT ename, sal FROM emp WHERE remainder (sal,2) != 0;

--58.  List the employee’s whose Salary contain 3 digits. 
SELECT ename, sal FROM emp WHERE sal LIKE '___';

--59.  List the employees who joined in the month of DEC.  
SELECT ename, hiredate FROM emp WHERE TO_CHAR(hiredate, 'MON') = 'DEC';

--60.  List the employees whose names contains ‘A’. 
SELECT ename FROM emp WHERE ename LIKE '%A%';

--61.  List the employees whose Deptno is available in his Salary.
SELECT ENAME,SAL,DEPTNO FROM EMP WHERE SAL LIKE '%'||DEPTNO||'%';

--62.  List the employees whose 10% of Salary is equal to year of joining
SELECT ename FROM emp WHERE sal*0.1 = TO_CHAR (hiredate, 'YY');

--63.  List first 50% of chars of Ename in Lower Case and remaining are upper Case. 
SELECT ename,LOWER (SUBSTR (ename, 1, (LENGTH (ename))/2)) ||
UPPER (SUBSTR(ename, (LENGTH(ename))/2+1))FROM emp; 

--64.  List the Enames who are retiring after 31-Dec-89 the max Job period is 20Y. 
SELECT ename, hiredate, to_char(ADD_MONTHS(hiredate, 240), 'dd-mon-yyyy') FROM emp 
WHERE ADD_MONTHS(hiredate, 240) > TO_DATE('31-Dec-89', 'dd-Mon-rr');

--65. List the employees in the ascending order of their Salaries? 
SELECT * FROM emp ORDER BY sal;

--66.  List the details of the employees in ascending order of the Department numbers 
--and descending of Jobs? 
SELECT * FROM emp ORDER BY deptno, job desc;

--67.  Display all the unique job groups in the descending order? 
SELECT DISTINCT job FROM emp ORDER BY job desc;

--68. List the Empno, Ename, Salary, Daily salary of all employees in the ascending order of Annual salary
SELECT empno, ename, sal, floor(sal/30) AS "Daily Salary", sal*12 AS  "Annual Salary" FROM emp  ORDER BY sal*12 ;

--69.  List the Empno, Ename, Salary and Experience of all employees working for Manager 7566. 
SELECT empno, ename, sal, floor((MONTHS_BETWEEN (sysdate, hiredate))/12) AS "Experience" FROM emp WHERE mgr = 7566;

--70. List the employees in the ascending order of Designations of those joined after the second half of 1981. 
SELECT * FROM emp WHERE  hiredate BETWEEN '01-07-81' AND '31-12-81' ORDER BY job;

--71.  List the employees along with their Experience and Daily Salary is more than Rs.100. 
SELECT ename, floor(sal/12) AS "Daily Salary", floor((MONTHS_BETWEEN(sysdate, hiredate))/12) AS "Experience" 
FROM emp WHERE floor(sal/12) > 100;

--72.  List the employees who are either ‘CLERK’ or ‘ANALYST’ in the Descending order. 
SELECT ename, job FROM emp WHERE job IN ('CLERK','ANALYST') ORDER BY ename desc;

--73.  List the employees who joined on 1-MAY-81,3-DEC-81,17-DEC-81,19-JAN-80 in ascending order of seniority. 
SELECT ename, hiredate, floor((MONTHS_BETWEEN(sysdate, hiredate))/12) AS "Experience" FROM emp WHERE hiredate 
IN ('1-MAY-81', '17-DEC-81', '3-DEC-81', '19-JAN-80') ORDER BY floor((MONTHS_BETWEEN(sysdate, hiredate))/12);

--74.  List the employees who are joined in the year 81. 
SELECT ename, hiredate FROM emp WHERE hiredate BETWEEN '01-01-81' AND '31-12-81';

--75.  List the employees who are joined in the month of Aug 1980. 
SELECT ename, hiredate from emp WHERE TO_CHAR (hiredate, 'MON-YYYY') = 'AUG-1980';

--76.  List the Enames those are having five characters in their Names. 
SELECT ename FROM emp WHERE ename LIKE '_____';

--77.  List the Enames those are starting with ‘S’ and with five characters. 
SELECT ename FROM emp WHERE ename LIKE 'S____';

--78.  List the employees those are having four chars and third character must be ‘r’. 
SELECT ename FROM emp WHERE ename LIKE '____' AND ename LIKE '__R%' ;

--79.  List the Five character names starting with ‘S’ and ending with ‘H’. 
SELECT ename FROM emp WHERE ename LIKE 'S%H' ;

--80.  List the employees who joined in January.
SELECT ename, hiredate FROM emp WHERE TO_CHAR (hiredate, 'MON') = 'JAN';

--81.  List the employees who joined in the month of which second character is ‘a’. 
SELECT ename, hiredate FROM emp WHERE TO_CHAR (hiredate, 'MON') LIKE '_A%';

--82.  List the employees whose Salary is four digit number ending with Zero
SELECT ename, sal FROM emp WHERE sal LIKE '___%0';

--83. List the employees whose names having a character set ‘LL’ together
SELECT ename FROM emp WHERE ename LIKE '%LL%'

--84.  List the employees those who joined in 80’s. 
SELECT ename, hiredate FROM emp WHERE TO_CHAR(hiredate, 'YYYY') = '1980';

--85.  List the employees who does not belong to Deptno 20. 
SELECT ename, deptno FROM emp WHERE deptno != 20;

--86. List all the employees except ‘PRESIDENT’ & ‘MGR” in ascending order of Salaries.
SELECT ename, job, sal FROM emp WHERE job NOT IN ('PRESIDENT', 'MANAGER') ORDER BY sal;

--87.  List all the employees who joined before or after 1981.
SELECT ename, hiredate  FROM emp WHERE TO_CHAR(hiredate, 'YYYY') >1981 OR TO_CHAR (hiredate, 'YYYY') < 1981;

--88.  List the employees whose Empno not starting with digit78.  
SELECT ename, empno FROM emp WHERE empno NOT LIKE '78%'

-89.  List the employees who joined in any year but not belongs to the month of March.
SELECT ename, hiredate FROM emp WHERE TO_CHAR(hiredate, 'MON') != 'MAR';

--90. . List the employees of Deptno 30 or 10 joined in the year 1981. 
SELECT ename, deptno, hiredate FROM emp WHERE deptno IN (10,30) AND TO_CHAR (hiredate, 'YYYY') = '1981';

--91. . Find the highest salary of EMP table. 
SELECT max(sal) FROM emp;

--92.  Find the total salary given to the MANAGER
SELECT sum(sal) FROM emp WHERE job = 'MANAGER';

--93.  Find the total annual salary to distribute job wise in the year 81. 
SELECT job, sum(sal*12) FROM emp WHERE TO_CHAR (hiredate, 'YYYY') = '1981' GROUP  BY job;

--94.  Display total salary employee belonging to grade 3. 
SELECT ename, sal, grade FROM emp INNER JOIN salgrade ON sal BETWEEN losal AND hisal
 WHERE grade = 3;
 
 --95. Display the average salaries of all the clerks
 SELECT avg(sal) FROM emp WHERE job = 'CLERK';
 
 --96.  List the employees with Hire date in format June 4, 1988.
 SELECT ename, TRIM(TO_CHAR(hiredate, 'MONTH-DD-YYYY')) FROM emp;
 
 --97. Print a list of emp’s Listing ‘just salary’ if Salary is more than 1500, on target if Salary is 1500 and ‘Below 1500’ if Salary is less than 1500.  
 SELECT ename,sal,
CASE
  WHEN sal>1500 THEN 'just salary'
  WHEN sal<1500 THEN 'below 1500'
  WHEN sal=1500 THEN 'on target'
END
FROM emp;
 
 --98.  Write a query which return the day of the week for any date entered in format ‘DD-MM-YY’.
 
 
 --99.  Count the no. of characters without considering spaces for each name.
 SELECT length(replace(ename, ' ', '')), ename FROM emp;
 
 --100.  Find out how may Managers are their in the company. 
 SELECT count(job) AS "Manager Count" FROM emp WHERE job = 'MANAGER';
 
 --101.  List the employees who are drawing less than 1000 Sort the output by Salary.
 SELECT ename, sal FROM emp WHERE sal< 1000  ORDER BY sal;
 
 --102.  List the details of the employees in the ascending order of the salary. 
 SELECT ename, sal FROM emp ORDER BY sal;
 
 --103.  List the dept in the ascending order of the job and the descending order of the employees print empno, ename. 
 SELECT deptno, empno, ename, job FROM emp ORDER BY job, ename desc;
 
 --104.  List the empno,ename,salary,deptno of the dept 10 employees in the ascending order of salary. 
 SELECT empno, ename, sal, deptno FROM emp WHERE deptno = 10 ORDER BY sal ;
 
 --105. . List the employees whose salaries are less than 3500.  
 SELECT ename, sal FROM emp WHERE sal < 3500;
 
 --106.  List the empno, ename, salary of all the emp joined before 1 apr 81.  
 SELECT empno, ename, sal, hiredate FROM emp WHERE hiredate < '01-04-81' ;

--107.  List the emp whose annual salary is <25000 in the ascending order of the salaries. 
 SELECT ename, sal*12 AS "Annual Salary" FROM emp WHERE (sal*12) < 25000  ORDER BY sal;
 
 --108.  List the empno, ename, annual salary, daily salary of all the salesmen in the ascending annual salary.
 SELECT empno, ename, sal*12 AS "Annual Salary", floor(sal/30) AS "Daily Salary" FROM emp 
WHERE job = 'SALESMAN'  ORDER BY sal*12;


--109. List the empno, ename, hiredate, current date & experience in the ascending order of the experience. 
SELECT empno, ename, hiredate , sysdate, floor((MONTHS_BETWEEN(sysdate, hiredate))/12) AS "Experience"
FROM emp ORDER BY floor((MONTHS_BETWEEN(sysdate, hiredate))/12);

--110.List the employees whose experience is more than 10 years.   
SELECT ename, floor((MONTHS_BETWEEN(sysdate, hiredate))/12) AS "Experience" FROM emp
   WHERE floor((MONTHS_BETWEEN(sysdate, hiredate))/12) >10;
   
--111.  List the empno,ename,salary,TA30%,DA 40%,HRA 50%,GROSS,LIC,PF,net,deduction,net allow and net salary in the ascending order of the net salary. 


--112. List the employee who joined in the month of JAN. 
SELECT ename, hiredate FROM emp WHERE TO_CHAR(HIREDATE, 'MON') = 'JAN';

--113. Who joined in the month having char ‘a’.
SELECT ename, TO_CHAR(hiredate, 'DD-MON-YYYY')  FROM emp 
WHERE TO_CHAR(hiredate, 'MON') LIKE '%A%'

--114.  Who joined in the month having second char ‘a’ 
SELECT ename, TO_CHAR(hiredate, 'DD-MON-YYYY')  FROM emp 
WHERE TO_CHAR(hiredate, 'MON') LIKE '_A%'

--115. List the employees joined in January with salary ranging from 1500 to 4000.
SELECT ename, sal, hiredate  FROM emp WHERE TO_CHAR(hiredate, 'MON') = 'JAN'
AND sal BETWEEN 1500 AND 4000 ;

--116.  List the unique jobs of department 20 and 30 in descending order.
SELECT DISTINCT job, deptno FROM emp  WHERE deptno IN (20,30) ORDER BY deptno;

--117.  List the employees along with experience of those working under the 
--Manager whose number is starting with 7 but should not have a 9 joined before 1983.
SELECT  ename, mgr, hiredate, floor((MONTHS_BETWEEN(sysdate, hiredate))/12) AS "Experience" 
FROM emp WHERE mgr LIKE '7%' AND TO_CHAR(hiredate, 'YYYY') < '1983';

--118.  List the employees who are working as either Manager or analyst with 
--the salary ranging from 2000 to 5000 and without comm.
SELECT ename, sal, comm, job FROM emp WHERE job IN ('MANAGER', 'ANALYST') AND 
comm IS null;

--119.  Find out experience of MILLER. 
SELECT ename, floor((MONTHS_BETWEEN(sysdate,hiredate))/12) FROM emp WHERE ename = 'MILLER';

--120. . How many different departments are there in the employee table.
SELECT count(DISTINCT deptno) FROM emp;

--121.  Find out which employee either work in SALES or RESEARCH department.  
SELECT ename, dname FROM emp INNER JOIN dept ON emp.deptno = dept.deptno
WHERE dname IN ('SALES', 'RESEARCH');

--122. . Print the name and average salary of each department. 
SELECT dname, round(avg(sal)) FROM emp INNER JOIN dept ON emp.deptno = dept.deptno 
GROUP BY dname; 

--123.  Select the minimum and maximum salary from employee table
SELECT max(sal), min(sal) FROM emp;

--124.  Select the minimum and maximum salaries from each department in employee table. 
SELECT deptno, max(sal), min(sal) FROM emp GROUP BY deptno;

--125.  Select the details of employees whose salary is below 1000 and job is CLERK.
SELECT ename, sal FROM emp WHERE sal < 1000 AND job = 'CLERK';

--126.  Display the number of employee for each job group deptno wise. 
SELECT count(ename),deptno, job FROM emp GROUP BY job, deptno ORDER BY deptno;

--127.  List the manager no and the number of employees working for those managers in the ascending. 
`SELECT count(ename), mgr, ename FROM emp GROUP BY mgr, ename ORDER BY ename;

--128. . Display the Grade, Number of employees, and max salary of each grade.
SELECT grade, count(ename), max(sal) FROM emp INNER JOIN salgrade ON sal BETWEEN losal AND hisal GROUP BY grade;

--129.  Display dname, grade, No. of employees where at least two employees are clerks. 
SELECT dname, grade, count(ename) FROM emp e INNER JOIN dept d ON e.deptno = d.deptno 
INNER JOIN salgrade ON sal BETWEEN losal AND hisal WHERE job = 'CLERK'GROUP BY dname, grade 
HAVING count(ename) >= 2;

--130.  List the names of the employees who are getting the highest salary dept wise. 
SELECT em.ename, em.sal, dname  FROM 
(SELECT   max(sal) AS sal ,e.deptno, dname  FROM emp e INNER JOIN 
dept d ON e.deptno = d.deptno
GROUP BY e.deptno, dname) x
INNER JOIN emp em ON  x.deptno = em.deptno AND  x.sal = em.sal

--131. List the no. of employees in each department where the no. is more than 3. 
SELECT count(ename), dname FROM emp e INNER JOIN dept d ON e.deptno = d.deptno
GROUP  BY dname HAVING count(ename) > 3;

--132.  List the names of depts. Where at least 3 are working in that department. 
SELECT  dname, COUNT(ename) FROM emp e INNER JOIN dept d ON e.deptno = d.deptno
 GROUP BY dname HAVING COUNT(ename) >= 3;
 
--133.  Find Average salary and Average total remuneration for each Job type 
SELECT ROUND(AVG(sal)), job FROM emp 
GROUP BY job;

--134.  Find all the employees who earn the minimum Salary for each job wise in ascending order. 
SELECT MIN(sal), job FROM emp GROUP BY job ORDER BY job;

--135.  Find out all the employees who earn highest salary in each job type. Sort in descending salary order. 
SELECT MAX(sal) AS "Maximum Salary", job FROM emp GROUP BY job ORDER BY "Maximum Salary";

--136. Find out the most recently hired employees in each Dept order by Hiredate. 
SELECT em.ename, em.hiredate, dname  FROM 
(SELECT   max(hiredate) AS hiredate  ,e.deptno, dname  FROM emp e INNER JOIN 
dept d ON e.deptno = d.deptno
GROUP BY e.deptno, dname) x
INNER JOIN emp em ON  x.deptno = em.deptno AND  x.hiredate = em.hiredate

--137.  List the employee name, Salary and Deptno for each employee who earns a 
--salary greater than the average for their department order by Deptno.
SELECT e.ename, e.sal, e.deptno FROM 
(SELECT floor(avg(sal)) sal, deptno FROM emp e GROUP BY deptno) x 
INNER JOIN emp e ON e.deptno = x.deptno AND  e.sal > x.sal ORDER BY deptno

--138.  List the Deptno where there are no employees. 
SELECT deptno FROM emp WHERE ename IS NULL;

--139.  List the No. of emp’s and Avg salary within each department for each job. 
SELECT COUNT(ename),  AVG(sal), job, dname FROM emp e
INNER JOIN dept d ON e.deptno = d.deptno
GROUP BY job, dname;

--140.  Find the maximum average salary drawn for each job except for ‘President’. 
SELECT ROUND((AVG(sal))), job FROM emp WHERE job != 'PRESIDENT'
 GROUP BY job;
 
 --141.  Display all the details of all ‘Managers’ 
SELECT * FROM emp e INNER JOIN dept  d ON e.deptno = d.deptno 
INNER JOIN salgrade ON sal BETWEEN losal AND hisal WHERE job = 'MANAGER'

--142.  Display the Empno, Ename, job, Hiredate, Experience of all Managers. 
SELECT empno, ename , job, hiredate, floor((MONTHS_BETWEEN(sysdate,hiredate))/12)
 FROM emp WHERE job IN (SELECT job FROM emp WHERE job = 'MANAGER' );
 
 --143.  List all the Grade2 and Grade 3 employees. 
 SELECT ename, sal, grade FROM emp INNER JOIN salgrade ON sal BETWEEN losal AND hisal
 WHERE grade IN (2,3); 
 
 --144. Display all Grade 4, 5 Analyst and Manager
 SELECT grade, job, sal FROM emp INNER JOIN salgrade ON sal BETWEEN losal AND hisal
 WHERE job IN ('ANALYST', 'MANAGER') AND grade IN (4,5);
 
 --145. List all the information of emp with Location and the Grade of all the 
 --employees belong to the Grade range from 2 to 4 working at the Dept those are 
 --not starting with char set ‘OP’ and not ending with ‘S’ with the designation 
-- having a char ‘a’ any where joined in the year 1981 but not in the month of 
-- Mar or Sep and Salary not end with ‘00’ in the ascending order of Grades
SELECT * FROM emp e INNER JOIN dept d ON e.deptno = d.deptno 
INNER JOIN salgrade ON sal BETWEEN losal AND hisal
WHERE grade BETWEEN 2 AND 4 AND dname NOT LIKE 'OP%' AND dname NOT LIKE '%S'
AND job LIKE '%A%' AND TO_CHAR(hiredate, 'YYYY') = '1981' 
AND TO_CHAR(hiredate,  'MON') != 'MAR' AND TO_CHAR(hiredate,  'MON') != 'SEP'
AND sal NOT LIKE '%00' ORDER BY grade;

--146.  List the details of the employees whose Salaries more than the employee BLAKE.
SELECT * FROM emp WHERE sal > (SELECT sal FROM emp WHERE ename = 'BLAKE');

--147.  List the employees whose Jobs are same as ALLEN
SELECT ename, job FROM emp WHERE job = (SELECT job FROM emp WHERE ename = 'ALLEN');

--148. . List the emps who are senior to King. 
SELECT ename, hiredate, floor(MONTHS_BETWEEN(sysdate,hiredate)/12) FROM emp 
WHERE floor(MONTHS_BETWEEN(sysdate,hiredate)/12) > 
(SELECT floor(MONTHS_BETWEEN(sysdate,hiredate)/12) FROM emp WHERE ename = 'KING') ;

--149.  List the Employees of Deptno 20 whose Jobs are same as Deptno10. 
SELECT ename, deptno, job FROM emp WHERE job IN (SELECT job FROM emp WHERE deptno = 10)
AND deptno = 20;

--150.  List the Employees whose Salary is same as FORD or SMITH in descending order of Salary.
SELECT ename, sal FROM emp WHERE sal IN (SELECT sal FROM emp WHERE ename IN('FORD', 'SMITH')) ORDER BY sal desc;

--151. List the employees Whose Jobs are same as MILLER or Salary is more than ALLEN. 
SELECT ename, job, sal FROM emp WHERE job = (SELECT job FROM emp WHERE ename = 'MILLER') OR
sal > (SELECT sal FROM emp WHERE ename = 'ALLEN' );

--152. List the Employees whose Salary is > the total remuneration of the SALESMAN. 
SELECT ename, sal FROM emp WHERE sal > (SELECT SUM(sal) FROM emp WHERE ename = 'SALESMAN')

--153. List the employees who are senior to BLAKE working at CHICAGO & BOSTON. 
SELECT ename, hiredate, loc, floor(MONTHS_BETWEEN(sysdate, hiredate)/12) FROM emp e
INNER JOIN dept d ON e.deptno = d.deptno WHERE loc IN ('CHICAGO', 'BOSTON') AND 
floor(MONTHS_BETWEEN(sysdate, hiredate)/12) > (SELECT floor(MONTHS_BETWEEN(sysdate, hiredate)/12) FROM emp
WHERE ename = 'BLAKE');

--154.  List the Employees of Grade 3,4 belongs to the dept ACCOUNTING and RESEARCH whose Salary 
--is more than ALLEN and experience more than SMITH in the ascending order of EXPERIENCE.
SELECT ename, grade, dname, sal FROM emp e INNER JOIN dept d ON e.deptno = d.deptno 
 INNER JOIN salgrade ON sal BETWEEN losal AND hisal  WHERE dname IN ('ACCOUNTING', 'RESEARCH') 
 AND sal > (SELECT sal FROM emp WHERE ename = 'ALLEN') AND floor(MONTHS_BETWEEN(sysdate, hiredate)/12) > 
 (SELECT floor(MONTHS_BETWEEN(sysdate, hiredate)/12)FROM emp WHERE ename = 'SMITH') AND grade IN (3,4)  
 ORDER BY floor(MONTHS_BETWEEN(sysdate, hiredate)/12);
 
--155.  List the employees whose jobs same as SMITH or ALLEN. 
SELECT ename, job FROM emp WHERE job IN (SELECT job FROM emp WHERE ename IN ('SMITH', 'ALLEN')) 
AND ename NOT IN ('SMITH','ALLEN');

--156.  Any jobs of deptno 10 those that are not found in deptno 20. 
SELECT job FROM emp WHERE deptno = 10
MINUS
SELECT job FROM emp WHERE deptno = 20

--157.  Find details of highest paid employee
SELECT * FROM emp e INNER JOIN dept d ON e.deptno = d.deptno 
INNER JOIN salgrade ON sal BETWEEN losal AND hisal WHERE sal = (SELECT MAX(sal) FROM emp);

--158.  Find the highest paid employee of sales department. 
SELECT ename, sal FROM emp WHERE sal = (SELECT MAX(sal) FROM emp WHERE job = 'SALESMAN');

--159.  List the most recently hired emp of grade3 belongs to location CHICAGO. 
SELECT MAX(hiredate), loc, sal, ename FROM emp e INNER JOIN dept d ON e.deptno = d.deptno 
INNER JOIN salgrade ON sal BETWEEN losal AND hisal
WHERE grade = 3  AND loc = 'CHICAGO' GROUP BY  loc, sal, ename;

--160. List the employees who are senior to most recently hired employee working under king
SELECT ename, hiredate FROM emp WHERE hiredate <
(SELECT TO_CHAR(MAX(hiredate), 'DD-MON-YYYY') FROM emp 
WHERE mgr = (SELECT empno FROM emp WHERE ename = 'KING'))

--161.  List the details of the employee belongs to newyork with grade 3 to 5 except ‘PRESIDENT’ 
--whose salary> the highest paid employee of Chicago in a group where there is manager and salesman 
--not working under king. 
SELECT * FROM emp e INNER JOIN dept d ON e.deptno = d.deptno INNER JOIN salgrade ON sal BETWEEN losal AND hisal
WHERE loc = 'NEW YORK' AND grade IN (3,4,5) AND job != 'PRESIDENT' AND sal > 
(SELECT MAX(sal) FROM emp WHERE  deptno =30 AND job IN ('MANAGER', 'SALESMAN')) AND mgr != 7839 ;

--162.  List the details of the senior employee belongs to 1981. 
SELECT ename, floor(MONTHS_BETWEEN(sysdate, hiredate)/12) FROM emp WHERE TO_CHAR(hiredate, 'YYYY') = 1981
ORDER BY floor(MONTHS_BETWEEN(sysdate, hiredate)/12) desc;

--163. . List the employees who joined in 1981 with the job same as the most senior person of the year 1981. 
SELECT * FROM emp WHERE job IN (
SELECT  job FROM emp WHERE HIREDATE = (SELECT MIN(hiredate) FROM emp 
WHERE hiredate BETWEEN '01-01-81' AND '31-12-81')) AND hiredate BETWEEN '01-01-81' AND '31-12-81'

--164.  List the most senior empl working under the king and grade is more than 3.   
SELECT ename, mgr, hiredate, floor((MONTHS_BETWEEN(sysdate, hiredate)/12)) Experience, grade 
FROM emp INNER JOIN salgrade ON sal BETWEEN losal AND hisal WHERE mgr = (SELECT empno FROM emp WHERE ename = 'KING')
AND grade > 3;

--165.  List the employee in dept 20 whose salary is >the average salary 0f dept 10 employees.
SELECT ename, sal FROM emp WHERE deptno = 20 AND sal > (SELECT floor(AVG(sal)) FROM emp WHERE deptno =10)

--166. . Display the employees whose manager name is jones. 
SELECT ename, mgr FROM emp WHERE mgr = (SELECT  empno FROM emp  WHERE ename = 'JONES');

--167.  List the employees who are not working in sales dept
SELECT  ename, job FROM emp WHERE job != 'SALESMAN';

--168.  List the name, job, dname, location for those who are working as MANAGERS.  
SELECT ename, job, dname, loc  FROM emp e INNER JOIN dept d ON e.deptno = d.deptno
INNER JOIN salgrade ON sal BETWEEN losal AND hisal WHERE job = 'MANAGER';

--169.  List the employees whose salary is equal to the average of max and minimum 
SELECT ename, sal FROM emp WHERE sal = (SELECT (MAX(sal) + MIN(sal))/2 FROM emp)

--170. List the managers whose salary is more than his employees average salary. 
SELECT ename, e.sal, mgr FROM 
(SELECT sal, empno FROM emp WHERE job = 'MANAGER') x
INNER JOIN emp e ON e.mgr = x.empno AND e.sal > x.sal

--171. List the name, salary, comm. For those employees whose net pay is greater than or equal to any other employee salary of the company. 
SELECT ename, sal, comm FROM emp WHERE sal+NVL(comm,0) > ANY (SELECT sal FROM emp);

--172.  List the employee names and his average salary department wise. 
 List the employee names and his average salary department wise. 
 
 --173.  Find out employees whose salaries greater than salaries of their managers. 
 SELECT e.ename, e.sal, mgr FROM
(SELECT empno, sal, ename FROM emp WHERE  job = 'MANAGER') x
INNER JOIN emp e ON mgr = x.empno AND e.sal > x.sal

--174. . List the managers who are not working under the president.
SELECT ename, mgr, job FROM emp WHERE mgr IS NULL AND job = 'MANAGER';

--175.  List the records from employee whose deptno is not in dept. 
SELECT deptno FROM emp WHERE deptno NOT IN (SELECT deptno FROM dept)

--176.  List the Name, Salary, Commission and Net Pay is more than any other employee.
SELECT ename, sal, comm FROM emp WHERE sal+NVL(comm,0) > ANY (SELECT sal FROM emp);

--177. List the Name of dept where highest no. of employees are working.
SELECT dname FROM dept WHERE deptno =
(SELECT DISTINCT deptno FROM 
(SELECT  COUNT(ename) cnt, deptno FROM emp GROUP BY deptno ORDER BY 1 desc) X
where ROWNUM = 1)

--178. Count the No. of employees who are working as ‘Managers’(using set option).
SELECT COUNT(ename), job FROM emp WHERE job = 'MANAGER' GROUP BY job;

--179. List the employees who joined in the company on the same date.


--180. List the details of the employees whose Grade is equal to one tenth of Sales Dept. 

--181.  List the name of the dept where more than average no. of employees are working.

--182.  List those Managers who are getting less than his employees Salary. 
SELECT DISTINCT ename, e.sal, e.empno, job FROM
(SELECT  sal, mgr FROM emp) x
INNER JOIN emp e ON x.sal >  e.sal AND e.empno = x.mgr;

--183. Print the details of all the employees who are sub-ordinates to Blake. 
SELECT ename, mgr FROM emp WHERE mgr = (SELECT empno FROM emp WHERE ename = 'BLAKE') ;

--184. List the employees whose Manager name is ‘Jones’ and also with his Manager name
SELECT E.ename as Employee, M.ename as Manager
FROM emp E
LEFT OUTER JOIN emp M
ON E.mgr = M.empno WHERE M.ename = 'JONES';

--185.  Find out the Job that was filled in the first half of 1983 and same job that was filled during the same 
--period of 1984.
SELECT ename, e.job, hiredate FROM 
(SELECT job FROM emp WHERE hiredate BETWEEN '01-01-1984' AND '30-06-1984') x
INNER JOIN emp e ON e.job = x.job WHERE e.hiredate BETWEEN '01-01-1983' AND '30-06-1983'

--186. Find out the employees who joined in the company before their Managers. 
SELECT  ename, e.hiredate, mgr FROM
(SELECT hiredate, empno FROM emp WHERE job = 'MANAGER') x
INNER JOIN emp e ON e.mgr = x.empno AND e.hiredate < x.hiredate

--184. Find the name and Job of the employees who earn Max salary and Commission. 
SELECT ename, job, sal, comm FROM emp WHERE sal = (SELECT MAX(sal) FROM emp) AND 
comm = (SELECT MAX(comm) FROM emp)

--185.  List the Name, Job and Salary of the employees who are not belonging to the 
--department 10 but who have the same job and Salary as the employees of dept 10. 
SELECT ename, job, sal, deptno FROM emp WHERE deptno !=10 AND job IN(SELECT job FROM emp WHERE deptno = 10)
AND sal IN (SELECT sal FROM emp WHERE deptno = 10 )

--186.  List the Deptno, Name, Job, Salary and Sal+Comm of the SALESMAN who are earning maximum salary 
--and commission in descending order.  
SELECT deptno, ename, job, sal, sal+comm FROM emp WHERE sal = (SELECT MAX(sal) FROM emp WHERE job = 'SALESMAN')
AND comm = (SELECT MAX(comm) FROM emp WHERE job = 'SALESMAN') ORDER BY sal;

-187.--  List the Deptno, Name, Job, Salary and Sal+Comm of the employees who earn 
--the second highest earnings (sal + comm.). 
SELECT  deptno, ename, job, sal, sal+comm FROM emp WHERE 
(sal+comm) = 
(SELECT MAX(sal+comm) FROM emp WHERE sal+comm < (SELECT MAX(sal+comm) FROM emp));

--188. List the Deptno and their average salaries for dept with the average salary less
--than the averages for all department  
SELECT ROUND(AVG(sal)), deptno FROM emp GROUP BY deptno
HAVING ROUND(AVG(sal)) < (SELECT ROUND(AVG(sal)) FROM emp);

--189. List out the Name, Job and Salary of the employees in the department with the highest average salary. 

--190.  List the employees whose job is same as smith. 
SELECT ename, job FROM emp WHERE job = (SELECT job FROM emp WHERE ename = 'SMITH') AND ename != 'SMITH';

--191. List the employees whose job is same as either Allen or salary>Allen
SELECT  ename, job, sal FROM emp  WHERE sal > (SELECT sal FROM emp WHERE ename = 'ALLEN') 
OR job = (SELECT job FROM emp WHERE ename = 'ALLEN') AND ename != 'ALLEN'; 

--192.  List the employees who are senior to their own manager. 
SELECT ename, e.mgr, e.hiredate FROM
(SELECT hiredate, empno  FROM emp WHERE job = 'MANAGER') x
INNER JOIN emp e ON e.mgr = x.empno AND e.hiredate > x.hiredate

--193. . List the employees whose salary greater than Blake’s salary. 
SELECT ename, sal FROM emp WHERE sal > (SELECT sal FROM emp WHERE ename = 'BLAKE')

--194.  List the dept 10 employees whose salary>Allen salary. 
SELECT ename, sal, deptno FROM emp WHERE sal > (SELECT sal FROM emp WHERE ename = 'ALLEN' );

--195.  List the Managers who are senior to king and who are junior to smith. 
SELECT ename, hiredate FROM emp WHERE job = 'MANAGER' AND hiredate <
(SELECT hiredate FROM emp WHERE ename = 'KING') 
AND hiredate > 
(SELECT hiredate FROM emp WHERE ename = 'SMITH')

--196.  List the employees whose salgrade are greater than the grade of miller. 
SELECT ename, grade, sal FROM emp INNER JOIN salgrade ON sal BETWEEN losal AND hisal
WHERE grade > (SELECT grade FROM salgrade WHERE (SELECT sal FROM emp WHERE ename = 'MILLER')
BETWEEN losal AND  hisal);

--197.  List the employees who are belonging Dallas or Chicago with the grade same 
--as Adams or experience more than smith.
SELECT ename, grade, sal, loc FROM emp e INNER JOIN dept d  ON e.deptno = d.deptno
INNER JOIN salgrade ON sal BETWEEN losal AND hisal
WHERE loc IN ('DALLAS', 'CHICAGO') AND 
grade = (SELECT grade FROM salgrade WHERE (SELECT sal FROM emp WHERE ename = 'ADAMS')
BETWEEN losal AND hisal) AND floor(MONTHS_BETWEEN(sysdate,  hiredate)/12) >
(SELECT floor(MONTHS_BETWEEN(sysdate, hiredate)/12) FROM emp WHERE ename = 'SMITH')

--198.  List the employees whose salary is same as ford or Blake. 
SELECT ename, sal FROM emp WHERE sal IN (SELECT sal FROM emp WHERE ename IN ('FORD','BLAKE'))

--199.  List the highest paid employee. 
SELECT  ename, sal FROM emp WHERE sal = (SELECT MAX(sal) FROM emp)

--200.  List the details of most recently hired employee of dept 30. 
SELECT * FROM emp WHERE hiredate = (SELECT MAX(hiredate) FROM emp WHERE deptno =30);

--201.  List the highest paid employee of Chicago joined before the most recently hired employee of grade2. 
SELECT ename, sal, e.deptno, loc, hiredate FROM emp e 
INNER JOIN dept d ON e.deptno = d.deptno 
WHERE sal = (SELECT MAX(sal) FROM emp  e INNER JOIN dept d ON e.deptno = d.deptno
WHERE loc = 'CHICAGO') AND hiredate < (SELECT MAX(hiredate) FROM emp INNER JOIN
salgrade ON sal BETWEEN losal AND hisal WHERE grade = 2)

--202.  List the highest paid employee working under king. 
SELECT * FROM emp WHERE sal = (SELECT MAX(sal) FROM emp WHERE empno = (SELECT DISTINCT mgr FROM emp WHERE job = 'MANAGER'))

--203.  Retrieve a list of MANAGERS.
SELECT * FROM emp WHERE job = 'MANAGER'

--204.  List the employees who are working as Managers using co-related sub-query. 
SELECT * FROM emp WHERE job = (SELECT DISTINCT job FROM emp WHERE mgr = 7839)

--205.  Consider the relations given below:  
--i. EMPLOYEE (EmployeeID, EmployeeName, Street, City)  
--ii. COMPANY (CompanyID, CompanyName, City)  
--iii. WORKS (EmployeeID, CompanyID, Salary)  
--iv. MANAGES (EmployeeID, ManagerID)   
--Create above relations using your own data types and print the structure of the  each relation.  

CREATE TABLE Employee
(
empid      VARCHAR2(3) CONSTRAINT empid_pk PRIMARY KEY,
empname    VARCHAR2(10),
street     VARCHAR2(10),
city       VARCHAR2(10)
);

CREATE TABLE Company
(
companyid       VARCHAR2(5)CONSTRAINT cmpid_pk PRIMARY KEY,
companyname     VARCHAR2(10),
city            VARCHAR2(10)
);

CREATE TABLE Worker
(
employeeid      VARCHAR2(3) CONSTRAINT emppid_pk UNIQUE Constraint empid_fk REFERENCES Employee(empid),
companyid       VARCHAR2(5)Constraint cmpid_fk REFERENCES Company(companyid),
salary          NUMBER(7)
);
DROP TABLE worker; purge  recyclebin;

CREATE TABLE Managers
(
employeeid      VARCHAR2(3) CONSTRAINT emp_id UNIQUE CONSTRAINT emid_fk REFERENCES Employee(empid),
managerid       VARCHAR2(3) CONSTRAINT mng_id UNIQUE
);
DROP TABLE managers; purge recyclebin;

--206. Insert at least 5 records in the relation EMPLOYEE and 5 records in the relation COMPANY
DESC employee
SELECT * FROM employee
INSERT INTO employee VALUES('1', 'Hemant', 'Jain Chowk', 'Bhiwani');
INSERT INTO employee VALUES('2', 'Puneet', 'Teliwada', 'Bhiwani');
INSERT INTO employee VALUES('3', 'Abhijeet', 'Sector-13', 'Bhiwani');
INSERT INTO employee VALUES('4', 'Ankit', 'Sector-14', 'Bhiwani');
INSERT INTO employee VALUES('5', 'Ajay', 'BankColony', 'Bhiwani');

DESC company;
SELECT * FROM company;
INSERT INTO company VALUES ('101', 'Cybage', 'Pune');
INSERT INTO company VALUES ('102', 'Tavisca', 'Pune');
INSERT INTO company VALUES ('103', 'Bitwise', 'Pune');
INSERT INTO company VALUES ('104', 'BT', 'Gurugram');
INSERT INTO company VALUES ('105', 'Virtusa', 'Pune');

--207. Insert 5 appropriate records in the relations WORKS and MANAGES.
DESC worker;
SELECT * FROM worker;
INSERT INTO worker VALUES ('1', '101', 10000);
INSERT INTO worker VALUES ('2', '102', 20000);
INSERT INTO worker VALUES ('3', '103', 30000);
INSERT INTO worker VALUES ('4', '104', 40000);
INSERT INTO worker VALUES ('5', '105', 50000);
DROP worker; purge recyclebin;

DESC managers;
SELECT * FROM managers;
INSERT INTO managers VALUES('1','11');
INSERT INTO managers VALUES('2','22');
INSERT INTO managers (employeeid) VALUES('3');
INSERT INTO managers VALUES('4','44');
INSERT INTO managers (employeeid) VALUES('5');

--208.  Add new column company_address in Company table 
ALTER TABLE company ADD company_address VARCHAR2(20);
SELECT * FROM company

--209.  Rename column company_address to address
ALTER TABLE company RENAME company_address to address;

--210.  Modify the size of Salary column to number(8,2)
DESC worker;
ALTER TABLE worker MODIFY salary NUMBER(8,2);
--211.  Print the contents of the each relation. 
SELECT 
--212. List the employees who are working under ‘MGR’ along with Manager name. 
SELECT E.ename as Employee, M.ename as Manager
FROM emp E
LEFT OUTER JOIN emp M
ON E.mgr = M.empno WHERE M.ename IN (SELECT ename FROM emp WHERE job = 'MANAGER');

--213.  List the total information of EMP table along with DNAME and Location of 
--all the employees Working Under ‘ACCOUNTING’ & ‘RESEARCH’ in the ascending Deptno.
SELECT empno, ename, job, mgr, hiredate, sal, comm, e.deptno, dname, loc FROM emp e 
INNER JOIN dept d ON e.deptno = d.deptno  
WHERE dname IN ('ACCOUNTING', 'RESEARCH') ORDER BY deptno;

--214.  List the Empno, Ename, Salary, Dname of all the ‘MGRS’ and ‘ANALYST’ working 
--in New York, Dallas with an experience more than 7 years without receiving the Comm 
--ascending order of Location. 
SELECT empno, ename, sal, dname, job, floor(MONTHS_BETWEEN(sysdate, hiredate)/12), loc, 
e.deptno, comm FROM emp e INNER JOIN dept d ON e.deptno = d.deptno
WHERE loc IN ('NEWYORK','DALLAS') AND job IN ('MANAGER', 'ANALYST') AND comm IS NULL
ORDER BY loc;

--215. Display the Empno, Ename, Salary, Dname, Location, Deptno, Job of all employees 
 --working at CJICAGO or working for ACCOUNTING dept with Annual Salary>28000, but 
 --the Salary should not be=3000 or 2800 who doesn’t belongs to the Manager and whose
 --no is having a digit ‘7’ or ‘8’ in 3rd position in the ascending order of Deptno 
 --and descending order of job. 
 
 --216.  Display the total information of the employees along with Grades in the ascending order. 
SELECT * FROM emp e INNER JOIN dept d ON e.deptno = d.deptno
INNER JOIN salgrade ON sal BETWEEN losal AND hisal ORDER BY grade;

--217.  List the Empno, Ename, Salary, Dname, Grade, Experience, and Annual Salary 
--of employees working for Dept10 or20. 
SELECT empno, ename, sal, dname, grade, floor(MONTHS_BETWEEN(sysdate, hiredate)/12) 
 AS "Experience", sal*12 AS "Annual Salary" FROM emp e
 INNER JOIN dept d ON e.deptno = d.deptno
 INNER JOIN salgrade ON sal BETWEEN losal AND hisal;
 
 --218. List the details of the Depts along with Empno, Ename or without the employees 
 SELECT empno, ename, dname FROM emp e INNER JOIN dept d ON e.deptno = d.deptno
 
 --219.  List the Employees who are senior to their own MANAGERS. 
 SELECT ename, e.hiredate, e.mgr FROM 
(SELECT hiredate, empno FROM emp WHERE job = 'MANAGER') x
INNER JOIN emp e ON e.mgr  = x.empno AND e.hiredate < x.hiredate

--220.  List the department details where at least two employees are working 
SELECT count(ename), deptno FROM emp GROUP BY deptno HAVING count(ename) > 2;

--221. . List the employees with dept names
SELECT ename, dname FROM emp e INNER JOIN dept d ON e.deptno = d.deptno;

--222. List the employees name, dept, salary and comm. For those 
--whose salary is between 2000 and 5000 while location is Chicago.
SELECT ename, e.deptno, dname, sal, comm, loc FROM emp e INNER JOIN dept d ON e.deptno = d.deptno
WHERE loc = 'CHICAGO';

--223. . List the employees whose salary is greater than his managers salary 
SELECT ename, e.sal,  e.mgr FROM 
(SELECT empno, sal FROM emp WHERE job = 'MANAGER') x
INNER JOIN emp e ON e.sal > x.sal AND e.mgr = x.empno;

--224. List the employees whose Manager name is jones and also list their manager name.
SELECT E.ename as Employee, M.ename as Manager
FROM emp E
LEFT OUTER JOIN emp M
ON E.mgr = M.empno WHERE M.ename = 'JONES';

--225. List the name and salary of ford if his salary is equal to high salary of his grade.
SELECT ename, sal FROM emp WHERE ename = 'FORD' AND 
sal = (SELECT MAX(sal) FROM emp INNER JOIN salgrade  
ON sal BETWEEN  losal AND hisal WHERE grade = (SELECT grade FROM salgrade 
WHERE (SELECT sal FROM emp WHERE ename = 'FORD') BETWEEN losal AND hisal))

--226  List the name, job, dname ,salary, grade dept wise. 
SELECT ename, job, dname, sal, grade FROM emp e
INNER JOIN dept d ON e.deptno = d.deptno
INNER JOIN salgrade ON sal BETWEEN losal AND hisal GROUP BY dname, ename, job, sal, grade

--227.  List the emp name, job, salary, grade and dname except clerks and sort on the basis of highest salary.
SELECT ename, job, sal, grade, dname FROM emp e
INNER JOIN dept d ON e.deptno = d.deptno
INNER JOIN salgrade ON sal BETWEEN losal AND hisal
WHERE job != 'CLERK' ORDER BY sal desc;

--228.  List the employee Name, Job, Annual Salary, deptno, Dept name and grade who earn 36000 a year or who are not CLERKS. 
SELECT ename, job, sal*12 AS "Annual Salary", e.deptno, dname, grade FROM emp e
INNER JOIN dept d ON e.deptno = d.deptno 
INNER JOIN salgrade ON sal BETWEEN losal AND hisal
WHERE sal*12  = 36000 AND job != 'CLERK';

--229.  List all the employees by name and number along with their Manager’s name and number. Also List KING who has no ‘Manager’. 
SELECT e.ename Employee, e.empno, m.ename Manager, m.empno AS "Manager_Id" FROM emp e
LEFT OUTER JOIN emp m ON e.mgr =  m.empno

--230. List out the Names and Salaries of the employees along with their manager names and salaries for those employees who earn more salary than their Manager.
SELECT e.ename Employee, e.sal Salary, m.ename Manager  FROM emp e
LEFT OUTER JOIN emp m ON e.mgr =  m.empno WHERE e.sal > m.sal

--231.  List the empno, ename, deptno, location of all the employees.  
SELECT empno, ename, e.deptno, loc FROM emp e INNER JOIN dept d ON e.deptno = d.deptno;

--232.  List the empno, ename, location, dname of all the depts.10 and 20.
SELECT empno, ename, loc, dname, e.deptno FROM emp e
INNER JOIN dept d ON e.deptno = d.deptno WHERE e.deptno IN (10,20)

--233.  List the empno, ename, salary, location of the employees working at Chicago dallas with an experience>6ys. 
SELECT empno, ename, sal, loc FROM emp e
INNER JOIN dept d ON e.deptno = d.deptno WHERE loc IN('CHICAGO', 'DALLAS');

--234.  List the employees along with location of those who belongs to dallas ,newyork with salary ranging from 2000 to 5000 joined in 81. 
SELECT ename, sal, loc, hiredate FROM emp e
INNER JOIN dept d ON e.deptno = d.deptno 
WHERE sal BETWEEN 2000 AND 5000 AND loc IN ('DALLAS', 'NEWYORK') AND 
TO_CHAR(hiredate, 'YY') = '81'

--235. . List the empno, ename, salary, grade of all employees. 
SELECT empno, ename, sal, grade FROM emp
INNER JOIN salgrade ON sal BETWEEN losal AND hisal

--236. List the details of the employees working at Chicago. 
SELECT * FROM emp e
INNER JOIN dept d ON e.deptno = d.deptno
WHERE loc = 'CHICAGO';

--237.  List the grade 2 and 3 emp of Chicago.
SELECT * FROM emp  e INNER JOIN dept d ON e.deptno = d.deptno
INNER JOIN salgrade ON sal BETWEEN losal AND hisal WHERE loc = 'CHICAGO';

--238.  List the employees with location and grade of accounting dept or the location Dallas or Chicago with the grades 3 to 5 &experience >6 year
SELECT ename, loc, sal, dname, grade, floor(MONTHS_BETWEEN(sysdate, hiredate)/12) 
 FROM emp e INNER JOIN dept d ON e.deptno = d.deptno
 INNER JOIN salgrade ON sal BETWEEN losal AND hisal
 WHERE dname = 'ACCOUNTING' AND grade IN (3,4,5) AND
 floor(MONTHS_BETWEEN(sysdate, hiredate)/12) > 6
 
--239. . List the grades 3 employees of research and operations depts joined after 1987 and whose names should not be either miller or Allen.
SELECT  ename, sal, grade, loc, hiredate, dname FROM emp e
INNER JOIN dept d ON e.deptno = d.deptno
INNER JOIN salgrade ON sal BETWEEN losal AND hisal
WHERE dname IN ('RESEARCH', 'OPERATIONS') AND grade = 3 AND 
TO_CHAR(hiredate, 'YYYY') > '1987'

--240.  List the empno, ename, location, salary, dname, location of the all the employees belonging to king dept. 
SELECT empno, ename, loc, sal, dname FROM emp e
INNER JOIN dept d ON e.deptno = d.deptno
WHERE dname = (SELECT dname FROM dept WHERE deptno = 10);

--241. 
