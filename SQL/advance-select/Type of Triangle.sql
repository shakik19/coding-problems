-- Direct Link: https://www.hackerrank.com/challenges/what-type-of-triangle/problem
-- Difficulty: Easy
-- DBMS: MySQL
SELECT
    CASE
        WHEN (A + B) <= C
        OR (B + C) <= A
        OR (A + C) <= B THEN 'Not A Triangle'
        WHEN A = B
        AND B = C
        AND A = C THEN 'Equilateral'
        WHEN A = B
        OR B = C
        OR A = C THEN 'Isosceles'
        ELSE 'Scalene'
    END AS type_of_triangle
FROM TRIANGLES