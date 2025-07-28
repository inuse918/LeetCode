/* Write your PL/SQL query statement below */
SELECT a.name "Customers"
FROM   Customers a
WHERE  NOT EXISTS (select b.customerId from Orders b where a.id = b.customerId)