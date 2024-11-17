# School Management System
Overview
The School Management System is a simple, user-friendly program designed to manage various components of a school effectively. It uses OOP principles such as inheritance and composition to improve the program's efficiency. The system manages the following classes: Student, Teacher, Course, Lab, and a Person superclass that sets the base for Student and Teacher.
This README provides an overview of the system's classes, their relationships, and how they interact.

## Classes and Relationships
### 1. Person (Superclass):
  Class that sets common attributes and methods for both students and teachers.
### Attributes:
name: The name of the person.
age: The age of the person.
address: The address of the person.
### Methods:
getters for each of the individual attributes as well as a getter for the entire information condensend into a string (getPersonDetails()), a setter for age as it changes over time and might need to be updated.

### 2. Student (Subclass derived from Person):
Represents a student, inheriting from the Person class. Adds attributes specific to students such as ID and semester.
### Attributes:
semester: the semester a student is enrolled in
studentID: a string starting with S which holds the unique identifier for a student
### Methods:
getStudentDetails(): Displays the student's specific details.

### 3. Teacher (Subclass derived from Person)
Represents a teacher, inheriting from the Person class. Adds attributes specific to teachers such as teacherID and teachingHours (how many hours a Teacher teachs per day).
### Attributes:
teacherID: a string starting with T which holds the unique identifier for a teacher
teachingHours: the number of hours a teacher teachs per day.
### Methods:
setTeachingHours(int): void: To update the hours a teacher teachs.
getTeacherDetails(): Displays the teacher's specific details.
getters to access the rest of attributes individually as a string.

### 4. Course
### Description:
Represents a course in the system, containing information about the associated teacher, students, and lab.
### Attributes:
courseKey: The unique code of the course.
courseName: The name of the course.
teacher: A composition relationship with the Teacher class, as a course cannot exist without a teacher.
students: A list of Student objects (linked with Course through composition), representing the enrolled students.
lab: A composition relationship with the Lab class, representing the lab associated with the course.
### Methods:
addStudent(student):void: this  
displayCourseDetails(): Displays detailed information about the course as a string, including the teacher, students, and lab.

### 5. Lab
### Description:
Represents a laboratory associated with a course.
### Attributes:
code: The lab's unique identifier.
size: The lab's seat/equipment capacity.
type: The lab's type (computer, bio, chemistry, physics, engineering, etc)
### Methods:
a setter for the size attribute as it might change over time.
getters to retrieve the attributes individually.
getLabDetails(): Displays the lab's specific details as a string.

## Key Relationships
### 1. Inheritance
Person is the superlass for both Student and Teacher, setting apart common attributes helps to reuse code and make the problem-solving process simpler.
### 2. Composition
Course is composed of the following classes:
Teacher: A course cannot exist without an associated teacher.
Students: A course includes a group of students.
Lab: A lab exists as a part of a course (some examples of Lab are science, computer, bio, chemistry and so on).

## System Functionality
### Add New Students and Teachers: 
Create objects of Student and Teacher with personalized attributes, using the constructor for each class.
### Modify attributes of objects of all classes:
Update age, courseKey, semester, and so on
### Assign Teachers to Courses: 
Link a Teacher object to a specific Course.
### Enroll/Delete Students in Courses: 
Add and remove Student objects to a Course.
### Associate Labs with Courses: 
Define a Lab and link it to a Course.
### Retrieve Details: 
Retrieve a Course's entire information into a string such as associated teacher, students, and lab.
### NOTE: 
For this current implementation (as of Nov 17th, there are NO lists for the students enrolled to a class, HOWEVER they'll be implemented soon :D)

## Class diagram
![image](https://github.com/user-attachments/assets/abb848ed-225f-448e-8684-bc06844eae77)






