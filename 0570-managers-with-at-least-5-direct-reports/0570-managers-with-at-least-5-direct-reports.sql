# Write your MySQL query statement below
select e.name from employee e , employee e1 where e.id=e1.managerid group by e1.managerid having count(e1.managerid) >= 5;