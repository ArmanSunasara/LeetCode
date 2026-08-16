SELECT 
    d.name AS Department, 
    e1.name AS Employee, 
    e1.salary AS Salary
FROM Employee e1
INNER JOIN Department d ON e1.departmentId = d.id
WHERE 3 > (
    SELECT COUNT(Distinct e2.salary)
    FROM Employee e2
    WHERE e2.departmentId = e1.departmentId 
      AND e2.salary > e1.salary
);
