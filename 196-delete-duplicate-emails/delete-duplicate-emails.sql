/* Write your PL/SQL query statement below */
DELETE Person
WHERE  id NOT IN (SELECT MIN(id) FROM Person GROUP BY email)