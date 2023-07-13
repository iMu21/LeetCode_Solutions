Select Id from
(
  select Id, Temperature-Lag(Temperature) over(order by recordDate) as tempDiff,
DATEDIFF(day, LAG(RecordDate) OVER(ORDER BY RecordDate), RecordDate) as dateDff
from Weather
) as t
where tempDiff>0 And dateDff=1
