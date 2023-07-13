Select distinct A.num as ConsecutiveNums
from Logs as A
inner join Logs as B on A.id+1 = B.id
inner join Logs as C on B.id+1 = C.id
where A.num =  B.Num
And B.Num = C.Num
