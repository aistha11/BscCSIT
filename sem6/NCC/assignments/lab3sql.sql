Create database Lab3db

CREATE TABLE dbo.Employee (
	Id int IDENTITY(1,1) NOT NULL,
	EmployeeName nvarchar(100) NULL,
	Department nvarchar(50) NULL,
	Salary nvarchar(50) NULL,
	JoinedOn date NULL,
)
Insert into dbo.Employee values ('Shyam','IT','2000','2020-09-02')

Select * from dbo.Employee
