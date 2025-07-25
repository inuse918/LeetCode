/* Write your PL/SQL query statement below */
SELECT max(a.email) Email
FROM   Person a
GROUP BY a.email
HAVING count(a.id) >=2
