# Write your MySQL query statement below
# SELECT name,IFNULL(sum(distance),0) as travelled_distance FROM Users JOIN Rides ON USERS.id=Rides.User_id GROUP BY Users.Id ORDER BY travelled_distance DESC, name ASC;

SELECT name, IFNULL(SUM(distance), 0) as travelled_distance
FROM Users u
LEFT JOIN Rides r
ON u.id = r.user_id
GROUP BY u.id
ORDER BY travelled_distance DESC, name ASC