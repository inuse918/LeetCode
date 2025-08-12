/*
select b.id 
from   Weather a
     , Weather b
where  to_char(to_date(a.recordDate +1),'yyyymmdd') = b.recordDate 
and    a.temperature < b.temperature
;;*/

SELECT today.id 
FROM Weather yesterday
CROSS JOIN Weather today -- 카티션 곱
WHERE today.recorddate - yesterday.recorddate = 1 -- 하루 차이만 남김 
  AND today.temperature > yesterday.temperature;
