# ORACLE 12c 이전에는 OFFSET 기능이 없으므로 MYSQL로 작성

select (
    select distinct salary
    from  Employee
    order by salary desc
    limit 1 offset 1 # limit N offset M >> M번째 row부터 N개 가져와라 offset index는 0부터 
) as SecondHighestSalary