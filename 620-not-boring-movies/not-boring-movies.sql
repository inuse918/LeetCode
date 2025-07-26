/* Write your PL/SQL query statement below */
SELECT a.* 
FROM   Cinema a
WHERE  a.description <> 'boring'
AND    MOD(a.id, 2) = 1
ORDER BY a.rating desc;

