-- Runtime: 697 ms
-- Memory: 0B

# Write your MySQL query statement below
select teacher_id,count(distinct(subject_id)) as cnt from teacher group by teacher_id;