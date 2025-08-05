SELECT MAX(NUM) AS num
FROM   (    
            SELECT NUM, COUNT(*)
            FROM   MyNumbers
            GROUP BY NUM
            HAVING COUNT(*) =1
            ORDER BY NUM DESC
        )
WHERE ROWNUM = 1