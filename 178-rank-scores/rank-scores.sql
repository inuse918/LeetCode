SELECT score,
       DENSE_RANK() OVER (ORDER BY score DESC) AS rank-- 순위 매기는 함수 
    
FROM   scores
ORDER BY score DESC;