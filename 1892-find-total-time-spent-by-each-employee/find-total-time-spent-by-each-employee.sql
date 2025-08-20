SELECT to_char(event_day,'yyyy-mm-dd')   AS DAY
     , emp_id 
     , SUM(OUT_TIME-IN_TIME) AS total_time 
FROM  Employees 
GROUP BY event_day, emp_id 
ORDER BY EMP_ID, DAY