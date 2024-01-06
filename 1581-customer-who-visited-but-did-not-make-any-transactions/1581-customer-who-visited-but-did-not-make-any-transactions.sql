# Write your MySQL query statement below
select v.customer_id,count(customer_id) as count_no_trans from visits v left join transactions t using(visit_id) where transaction_id is null group by customer_id;
