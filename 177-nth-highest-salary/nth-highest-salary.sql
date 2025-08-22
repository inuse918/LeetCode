CREATE FUNCTION getNthHighestSalary(N IN NUMBER) RETURN NUMBER IS -- 매개변수 N 타입 number
result NUMBER;
BEGIN
    /* Write your PL/SQL query statement below */

    SELECT distinct salary
    INTO result
    -- RANK 활용 => 중복 순위 뒤로 밂
    FROM  (  SELECT salary, DENSE_RANK() OVER (ORDER BY salary DESC) AS rn
            FROM Employee ) 
    WHERE rn = N ;
    
    RETURN result;
END;