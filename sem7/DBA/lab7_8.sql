select * from customers;

create or replace procedure greetings
as 
begin
    DBMS_OUTPUT.PUT_LINE('Hello World');
end;
/

create or replace procedure selectedcustomers
is 
begin
update customers
set first_name='Ram' 
where customer_id = 6;
end;
/

exec selectedcustomers;

CREATE TABLE audits(
    audit_id number GENERATED BY DEFAULT AS IDENTITY primary key,
    table_name varchar(50),
    transaction_name varchar(50),
    by_user varchar(50),
    transaction_date date
);

Create or replace trigger customers_audit_trg
    AFTER
    INSERT OR UPDATE OR DELETE
    ON customers
    FOR EACH ROW
DECLARE
    transaction_name varchar(30);
BEGIN
    transaction_name := CASE
        WHEN INSERTING THEN 'INSERT'
        WHEN UPDATING THEN 'UPDATE'
        WHEN DELETING THEN 'DELETE'
    END;
    INSERT INTO audits (table_name, transaction_name,by_user,transaction_date)
    VALUES('customers',transaction_name,USER,SYSDATE);
END;
/

drop table audits;

select * from audits;

update customers
set last_name='karki' 
where customer_id = 6;


