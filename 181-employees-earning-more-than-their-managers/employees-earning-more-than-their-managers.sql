/* Write your PL/SQL query statement below */
SELECT 
--a.id, a.name, a.salary, b.id, b.name, b.salary
     a.name employee
FROM   Employee a
     , Employee b
WHERE  a.managerId = b.Id(+)
AND    a.salary > b.salary
