--1. create roles Student
CREATE ROLE student;

--2. Grant select, insert, update privileges on customers table to role student
GRANT SELECT, INSERT, UPDATE ON customers TO student;



--3. Grant Student role to user
GRANT student TO dipak;

--4. Set roleto user
SET ROLE student;

--5. Veiw role
SELECT * FROM session_roles;
SELECT role, owner, table_name from role_tab_privs where role='STUDENT';

--6. Revoke student role from user
REVOKE student FROM dipak;

--7. Drop role
DROP ROLE student;