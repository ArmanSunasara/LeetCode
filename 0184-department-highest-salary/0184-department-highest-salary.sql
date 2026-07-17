select Department.name as Department,Employee.name as Employee , employee.salary as salary
from employee 
join Department
on employee.departmentID = Department.id
where employee.salary = 
(
    select max(a.salary)
    from employee a
    where a.departmentID = employee.departmentID
);