--SELECT
--1757. Recyclable and Low Fat Products
SELECT product_id FROM Products WHERE low_fats='Y' AND recyclable='Y'
--1683. Invalid Tweets
select tweet_id from Tweets where length(content)>15;
--584. Find Customer Referee
SELECT name FROM Customer WHERE referee_id!=2 OR referee_id IS NULL;
--595. Big Countries
SELECT name, population, area FROM World WHERE population>=25000000 OR area>=3000000;
--1148. Article Views I
select distinct author_id as id from views where viewer_id=author_id order by author_id ASC;

--BASIC JOINS
--1378. Replace Employee ID With The Unique Identifier
select eu.unique_id, e.name from Employees e left join EmployeeUNI eu on e.id=eu.id;
--1068. Product Sales Analysis I
select pr.product_name, sl.year, sl.price from Sales sl inner join Product pr on pr.product_id=sl.product_id;
--1581. Customer Who Visited but Did Not Make Any Transactions

--Advanced String Functions / Regex / Clause
--176. Second Highest salary
select max(salary) as SecondHighestSalary from Employee where salary not in (select max(salary) from Employee);

--Advanced Select and Joins
--610. Triangle judgement
select x, y, z, 'No' as triangle from Triangle where x+y<=z|| x+z<=y|| z+y<=x
union
select x, y, z, 'Yes' as triangle from Triangle where x+y>z and x+z>y and z+y>x;
