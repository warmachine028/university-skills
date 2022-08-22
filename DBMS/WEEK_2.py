import mysql.connector as sqltor

connection = sqltor.connect(
	host="localhost",
	user="root",
	password="1234"
)

cursor = connection.cursor()
cursor.execute("USE week2")

def  disp():
	for line in cursor:
		print(line)

# cursor.execute("SHOW DATABASES")
# cursor.execute("SHOW TABLES")
query1 = """CREATE TABLE Employee (
				emp_id VARCHAR(4) PRIMARY KEY,
				f_name VARCHAR(25),
				l_name VARCHAR(25),
				job_type VARCHAR(10),
				salary INT(10),
				dept VARCHAR(10),
				commission INT(10),
				manager_id VARCHAR(5)
			)
"""
query1a = "ALTER TABLE Employee DROP PRIMARY KEY"
query2 = "ALTER TABLE Employee ADD PRIMARY KEY(emp_id)"
query3 = """ALTER TABLE Employee 
				MODIFY f_name VARCHAR(25) NOT NULL,
				MODIFY salary INT(10) NOT NULL
"""
query4 = """ALTER TABLE Employee ADD date_of_joining DATE"""
query5 = """CREATE TABLE Department (
				d_name VARCHAR(10) PRIMARY KEY,
				d_loc VARCHAR(10),
				HOD_id VARCHAR(10)
			)
"""
query6 = """CREATE TABLE Location (
				loc_id VARCHAR(10),
				city VARCHAR(20),
				contact_no INT(12)
			)
"""
query7 = "ALTER TABLE Location MODIFY city VARCHAR(25)"
query8 = "ALTER TABLE Location DROP contact_no"
query9 = """ALTER TABLE Employee ADD FOREIGN KEY (dept)
		   REFERENCES Department(d_name)
"""
query10 = "ALTER TABLE Location RENAME COLUMN city TO address"
query11 = "RENAME TABLE Location TO Loc"
query12 = """INSERT INTO Loc VALUES
				(1, 'Kolkata'),
				(2, 'Mumbai')
"""
connection.commit()
query13 = "TRUNCATE TABLE Loc"
query14 = "DROP TABLE Loc"
query15 = """INSERT INTO Department VALUES
				('Sales', 'Kol', 4),
				('Accounts', 'Delhi', 6),
				('Production', 'Kol', 1),
				('Marketing', 'Kol', 2),
				('R & D', 'Marketing', 8)

"""
query = """INSERT INTO Employee (emp_id, f_name, l_name, job_type, salary, commission, dept, manager_id, date_of_joining) VALUES
				(1, 'Arun', 'Khan', 'Manager', 90000, 0, 'Production', NULL, "04-Jan-1998"),
				(2, 'Barun', 'Kumar', 'Manager', 80000, 0, 'Marketing', NULL, "09-Feb-1998")
"""
cursor.execute(query)
connection.commit()
cursor.execute("SELECT * FROM Department")
disp()