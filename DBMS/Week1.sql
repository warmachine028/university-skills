-- SHOW DATABASES;
-- CREATE DATABASE IF NOT EXISTS week1;
-- USE week1;
-- SHOW TABLES;
-- CREATE TABLE IF NOT EXISTS Employee (
--     empno INT NOT NULL,
--     empname VARCHAR(25) NOT NULL,
--     designation VARCHAR(10) DEFAULT 'staff',
--     salary INT NOT NULL
-- ); - Q1.
-- DESC employee; 
-- SHOW TABLES;
SELECT (
    COLUMN_NAME, 
    DATA_TYPE
) FROM information_schema.COLUMNS 
WHERE TABLE_NAME = 'employee';