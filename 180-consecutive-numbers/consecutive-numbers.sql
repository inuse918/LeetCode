/*select distinct num as "ConsecutiveNums"
from (
        SELECT num
            , LAG(num) OVER (ORDER BY id) AS prev_num -- 현재 행 기준 이전행의 num 가져옴 
            , LEAD(num) OVER (ORDER BY id) AS next_num -- 현재 행 기준 다음 행 num 가져옴
        FROM Logs 
    ) 
WHERE num = prev_num AND num = next_num;
    ;*/
-- 2번째 방법... 
SELECT DISTINCT  l1.num AS ConsecutiveNums
FROM   Logs l1, Logs l2, Logs l3
WHERE  l1.num = l2.num
AND    l2.num = l3.num
 -- join 방법~~
AND    l1.id = l2.id-1
AND    l2.id = l3.id-1