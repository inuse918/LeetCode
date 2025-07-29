/* Write your PL/SQL query statement below */

SELECT CUSTOMER_NUMBER FROM 
(    SELECT CUSTOMER_NUMBER
        , COUNT(*)
    FROM   Orders 
    GROUP BY CUSTOMER_NUMBER
    ORDER BY COUNT(*) DESC
)
WHERE ROWNUM = 1; 

-- 최신 버전???!
/*SELECT customer_number
FROM orders
GROUP BY customer_number
ORDER BY COUNT(*) DESC
FETCH FIRST 1 ROWS ONLY;*/
