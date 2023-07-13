select A.Name as Employee
from Employee as A
left join Employee as B on
A.managerId=B.Id
where A.salary>B.salary
