# Write your MySQL query statement below
SELECT w.id 
FROM weather w 
JOIN weather w1 ON DATE(w.recordDate) = DATE_ADD(DATE(w1.recordDate), INTERVAL 1 DAY)
WHERE w1.temperature < w.temperature;