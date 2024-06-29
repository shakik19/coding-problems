-- Direct Link: https://www.hackerrank.com/challenges/weather-observation-station-19/problem
-- Difficulty: Medium
-- DBMS: MySQL

SELECT
    ROUND(SQRT(POWER(MAX(LAT_N) - MIN(LAT_N), 2) + POWER(MAX(LONG_W) - MIN(LONG_W), 2)), 4)
FROM
    STATION