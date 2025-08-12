/* Write your PL/SQL query statement below */
select b.id 
from   Weather a
     , Weather b
where  to_char(to_date(a.recordDate +1),'yyyymmdd') = b.recordDate 
and    a.temperature < b.temperature