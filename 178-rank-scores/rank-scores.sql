/*SELECT score,
       DENSE_RANK() OVER (ORDER BY score DESC) AS rank-- 순위 매기는 함수 
    
FROM   scores
ORDER BY score DESC; */

select score
    , (select count(distinct b.score)
        from Scores b
        where b.score >= a.score ) as "rank" -- a의 score보다 큰 점수 count, 즉 1등 점수가 두 번 있어도 그 다음
        -- 등수가 바로 2등이 됨
from   scores a
order by a.score desc;