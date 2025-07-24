/* Write your PL/SQL query statement below */
SELECT a.firstName
     , a.lastName
     , b.city
     , b.state 
FROM  Person a
    , Address b
WHERE a.personId = b.personId(+);