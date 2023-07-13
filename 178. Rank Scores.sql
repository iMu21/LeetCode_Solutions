select S.Score as score,p.rank as rank
from Scores as S left join
(select distinct score, DENSE_RANK() over (order by Score desc) as Rank from Scores) as p
on S.Score = p.Score
order by S.Score desc
