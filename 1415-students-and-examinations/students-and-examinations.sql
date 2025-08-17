-- SELECT x.student_id, x.student_name, x.subject_name, nvl(exa.attended_exams,0) attended_exams
-- FROM   ( select stu.student_id, stu.student_name, b.subject_name from Students stu, Subjects b ) x
--      , ( select student_id, subject_name, count(*) attended_exams from Examinations 
--          group by student_id, subject_name ) exa
-- WHERE  x.student_id  = exa.student_id (+)
-- and    x.subject_name  = exa.subject_name (+)
-- order by x.student_id, x.SUBJECT_NAME 


-- Solution 방법
SELECT
    S.student_id,
    S.student_name,
    Su.subject_name,
    COUNT(E.student_id) AS attended_exams
FROM Students S
CROSS JOIN Subjects Su
LEFT OUTER JOIN Examinations E
       ON E.student_id = S.student_id
      AND E.subject_name = Su.subject_name
GROUP BY
    S.student_id, S.student_name, Su.subject_name
ORDER BY
    S.student_id, S.student_name, Su.subject_name;
