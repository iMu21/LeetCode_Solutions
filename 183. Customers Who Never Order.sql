select A.name as Customers
from Customers as A
left join Orders as B
on A.id = B.customerId
where B.id is null
