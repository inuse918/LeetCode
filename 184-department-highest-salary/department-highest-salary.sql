SELECT X.dname "Department"
     , Y.name "Employee"
     , Y.salary "Salary"
FROM   (
            SELECT b.id
                 , b.name as dname
                 , max(a.salary) salary
            FROM   Employee a
                 , Department  b
            WHERE  a.departmentId = b.id
            GROUP BY b.id, b.name
        ) X
    , Employee Y
WHERE X.id = Y.departmentId 
AND   X.salary = Y.salary
    
;