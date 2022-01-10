""" CODE 13:
Create a structure/class for a group of 50 students holding data for their Regn no., Name, Branch, CGPA.
a)	Call linear search function to display data of student with a particular Regn no..
b)	Call bubble sort function to arrange data of students according to Regn no.
c)	Apply binary search on the above output (part b) to display data of a student with a particular Regn no.
d)	Use and modify Insertion sort logic to arrange data of students in descending order of CGPA.
"""
from dataclasses import dataclass
from enum import Enum, auto


# Class to store branches
class Branch(Enum):
    CSE = auto()
    CST = auto()
    CSIT = auto()
    ECE = auto()
    EE = auto()
    BCE = auto()
    BBA = auto()
    BCA = auto()
    MCA = auto()
    MBA = auto()
    BHM = auto()
    BBA_LLB = auto()


# Class to store the data of students
@dataclass
class Student:
    registration_number: int
    name: str
    branch: Branch
    cgpa: float
    
    def __post_init__(self): self.branch = self.branch.name


# __main__
STUDENTS: list[Student] = [
    Student(1325_2345_9089, "Rohan Seth", Branch.BCA, 9.8),
    Student(1325_2025_9095, "Rahul Ghosh", Branch.BBA_LLB, 9.9),
    Student(1325_2345_9096, "Pritam Kundu", Branch.CSE, 8.9),
    Student(1325_2040_9090, "Madhu Bose", Branch.EE, 9.6),
    Student(1325_2395_9080, "Sunaina Sen", Branch.ECE, 7.9)
]  # STUDENTS = [Student() for i in range(50)]


# a) Call linear search function to display data of student with a particular Regn no..
def find_student(students: list[Student], registration_number: int) -> str:
    data = "Student Details not found"
    for student in students:
        if student.registration_number == registration_number:
            data = "DETAILS (STUDENT FOUND)\n" \
                   f"Name: {student.name}\n" \
                   f"Branch: {student.branch}\n" \
                   f"CGPA:  {student.cgpa}"
            break
    return data


# b) Call bubble sort function to arrange data of students according to Regn no.
def sort_students(students: list[Student]) -> None:
    for i, _ in enumerate(students):
        for j in range(i, len(students)):
            if students[i].registration_number > students[j].registration_number:
                students[i], students[j] = students[j], students[i]


# c) Apply binary search on the above output (part b) to display data of a student with a particular Regn no.
def find_student_efficiently(students: list[Student], registration_number: int) -> str:
    low = 0
    high = len(students)
    while low <= high:
        mid = (low + high) // 2
        student = students[mid]
        if registration_number == student.registration_number:
            return "DETAILS (STUDENT FOUND)\n" \
                   f"Name: {student.name}\n" \
                   f"Branch: {student.branch}\n" \
                   f"CGPA:  {student.cgpa}"
        elif registration_number > student.registration_number:
            low = mid + 1
        else:
            high = mid - 1
    return "Student Details Not found"


# d) Use and modify Insertion sort logic to arrange data of students in descending order of CGPA.
def arrange_students(students: list[Student]) -> None:
    for i, student in enumerate(students):
        position = i
        while position > 0 and students[position - 1].cgpa < student.cgpa:
            students[position] = students[position - 1]
            position -= 1
        students[position] = student


# Answers>
# a)
print(find_student(STUDENTS, 1325_2040_9090), '\n')  # STUDENT FOUND
print(find_student(STUDENTS, 1325_2345_9193))  # STUDENT NOT FOUND
# b)
print("\nBefore Sorting:", *STUDENTS, sep='\n')
sort_students(STUDENTS)
print("\nAfter Sorting:", *STUDENTS, '\n', sep='\n')
# c)
print(find_student_efficiently(STUDENTS, 1325_2040_9090), '\n')  # STUDENT FOUND
print(find_student_efficiently(STUDENTS, 1325_2395_9080), '\n')  # STUDENT FOUND
# d)
print("\nBefore Sorting:", *STUDENTS, sep='\n')
arrange_students(STUDENTS)
print("\nStudents arranged in Descending order of CGPA:", *STUDENTS, '\n', sep='\n')
