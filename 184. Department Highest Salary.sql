Select ds.Department as Department,emp.Name as Employee,ds.Salary as Salary
from Employee as emp
inner join

(Select Department, max(Salary) as Salary, DepartmentId as DepartmentId
from
(
  SELECT D.NAME AS Department,
  D.Id as DepartmentId , E.SALARY AS Salary
FROM EMPLOYEE AS E
INNER JOIN DEPARTMENT AS D
ON E.DEPARTMENTID = D.ID
) as p

group by Department, DepartmentId) as ds

on ds.Salary = emp.Salary
And ds.DepartmentId = emp.departmentId
