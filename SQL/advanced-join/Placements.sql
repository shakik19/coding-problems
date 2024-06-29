-- Direct Link: https://www.hackerrank.com/challenges/placements/problem
-- Difficulty: Medium
-- DBMS: MySQL

SELECT
    S.NAME
FROM
    STUDENTS S
    JOIN FRIENDS F ON S.ID = F.ID
    JOIN PACKAGES SP ON SP.ID = S.ID
    JOIN PACKAGES FP ON FP.ID = F.FRIEND_ID
WHERE
    FP.SALARY > SP.SALARY
ORDER BY
    FP.SALARY