# Write your MySQL query statement below

SELECT NAME,sum(transactions.amount) as BALANCE from Users,Transactions WHERE Users.account=Transactions.account GROUP BY Transactions.account HAVING sum(transactions.amount)>10000;
