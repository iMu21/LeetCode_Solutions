CREATE FUNCTION getNthHighestSalary(@N INT) RETURNS INT AS
BEGIN
    RETURN (
        select top 1 salary
        from(
            select salary, dense_rank() over (order by Salary desc) as Rank
            from Employee
            ) as p where p.Rank = @N
    );
END
