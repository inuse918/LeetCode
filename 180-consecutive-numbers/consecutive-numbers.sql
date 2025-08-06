select distinct num as "ConsecutiveNums"
from (
        SELECT num
            , LAG(num) OVER (ORDER BY id) AS prev_num -- 현재 행 기준 이전행의 num 가져옴 
            , LEAD(num) OVER (ORDER BY id) AS next_num -- 현재 행 기준 다음 행 num 가져옴
        FROM Logs 
    ) 
WHERE num = prev_num AND num = next_num;
    ;