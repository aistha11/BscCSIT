--1 Create user identified by password

CREATE USER bijay IDENTIFIED BY Bijay123;
CREATE USER dipak IDENTIFIED BY Dipak123;

--2
SELECT username from dba_users where account_status = 'OPEN';

--3
GRANT CREATE SESSION TO dipak;
GRANT CREATE SESSION TO ramesh;

--4
CREATE USER ramesh IDENTIFIED By Ramesh123 PASSWORD EXPIRE;

--5
select * from customers;
GRANT SELECT ON customers TO dipak;
GRANT SELECT ON customer_list TO dipak;
select * from customers;

--6
GRANT ALL ON customers TO bijay;


--7
REVOKE SELECT ON customers FROM dipak;

--8
REVOKE ALL ON customers FROM bijay;

--9
DROP USER ramesh;
select * from customers;
select * from orders;
