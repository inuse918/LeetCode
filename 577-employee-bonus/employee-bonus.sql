/* Write your PL/SQL query statement below */
/* select name, bonus
from (SELECT a.name 
     , b.bonus
FROM   Employee a
     , Bonus b
where  a.empid = b.empid(+)
)
where bonus is null or bonus <1000 */

select name, bonus
from (SELECT a.name 
     , b.bonus
FROM   Employee a
     , Bonus b
where  a.empid = b.empid(+)
and    (bonus is null or bonus <1000)
)