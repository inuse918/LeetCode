select a.name
, sum(COALESCE(b.distance,0)) travelled_distance 
from   Users  a
LEFT OUTER JOIN Rides b on a.id = b.user_id
group by a.id, a.name
order by 2 desc, a.name
;