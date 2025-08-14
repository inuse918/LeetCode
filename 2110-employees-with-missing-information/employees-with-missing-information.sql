

SELECT employee_id
FROM   (
SELECT EMPLOYEE_ID
FROM   Employees  a
WHERE  a.employee_id not in (select employee_id from  Salaries )

UNION

SELECT EMPLOYEE_ID
FROM   Salaries  a
WHERE  a.employee_id not in (select employee_id from  Employees   ) ) ORDER BY employee_id ;