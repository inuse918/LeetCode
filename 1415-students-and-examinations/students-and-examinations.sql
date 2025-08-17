SELECT x.student_id, x.student_name, x.subject_name, nvl(exa.attended_exams,0) attended_exams
FROM   ( select stu.student_id, stu.student_name, b.subject_name from Students stu, Subjects b ) x
     , ( select student_id, subject_name, count(*) attended_exams from Examinations 
         group by student_id, subject_name ) exa
WHERE  x.student_id  = exa.student_id (+)
and    x.subject_name  = exa.subject_name (+)
order by x.student_id, x.SUBJECT_NAME 
