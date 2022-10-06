select 
    c.name, 
    trunc((((s.math*2) + (s.specific * 3) + (s.project_plan * 5))/10), 2) avg
from
    candidate c
    inner join score s on s.candidate_id = c.id
order by
     avg desc;