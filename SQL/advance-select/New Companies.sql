-- Direct Link: https://www.hackerrank.com/challenges/the-company/problem 
-- Difficulty: Medium
-- DBMS: MySQL

SELECT 
    COMPANY_CODE,
    FOUNDER, 
    (
        SELECT COUNT(DISTINCT lead_manager_code)
        FROM LEAD_MANAGER
        WHERE
            COMPANY_CODE = C.COMPANY_CODE
    ), 
    (
        SELECT COUNT(DISTINCT senior_manager_code)
        FROM SENIOR_MANAGER
        WHERE
            COMPANY_CODE = C.COMPANY_CODE
    ), 
    (
        SELECT COUNT(DISTINCT manager_code)
        FROM MANAGER
        WHERE
            COMPANY_CODE = C.COMPANY_CODE
    ), 
    (
        SELECT COUNT(DISTINCT employee_code)
        FROM EMPLOYEE
        WHERE
            COMPANY_CODE = C.COMPANY_CODE
    )
FROM COMPANY C
ORDER BY COMPANY_CODE;