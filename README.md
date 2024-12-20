# School Management System
The School Management System is a simple, user-friendly program designed to manage various components of a school effectively. It uses OOP principles such as **inheritance** and **composition** to improve the program's efficiency. The system manages the following classes: Student, Teacher, Course, Lab, and a Person superclass that sets the base for Student and Teacher.
This README provides an overview of the system's classes, their relationships, how they interact and instructions on its usage.

## Classes and Relationships
### 1. Person (Superclass):
**Description:** Class that sets common attributes and methods for both students and teachers.
**Attributes:**
_name:_ The name of the person.
_age:_ The age of the person.
_address:_ The address of the person.
**Methods:**
_getters_ for each of the individual attributes as well as a _getter_ for the entire information condensend into a string (getPersonDetails()), a _setter_ for age as it changes over time and might need to be updated.

### 2. Student (Subclass derived from Person):
**Description:** Represents a student, inheriting from the Person class. Adds attributes specific to students such as ID and semester.
**Attributes:**
_semester:_ the semester a student is enrolled in
_studentID:_ a string starting with S which holds the unique identifier for a student
_avrg:_ represents a student's GPA
**Methods:**
_getters_ for each individual attribute
_setter_ for the semester and GPA as it changes constantly
_getStudentDetails():_ Displays the student's specific details.

### 3. Teacher (Subclass derived from Person)
**Description:** Represents a teacher, inheriting from the Person class. Adds attributes specific to teachers such as teacherID and teachingHours (how many hours a Teacher teachs per week).
**Attributes:**
_teacherID:_ a string starting with T which holds the unique identifier for a teacher
_teachingHours:_ the number of hours a teacher teachs per week.
**Methods:**
_setTeachingHours(int): void:_ To update the hours a teacher teachs.
_getTeacherDetails():_ Displays the teacher's specific details.
_getters_ to access the rest of attributes individually as a string.

### 4. Course
**Description:** Represents a course in the system, containing information about the associated teacher, students, and lab.
**Attributes:**
_courseKey:_ The unique code of the course. _courseName:_ The name of the course.
_teacher:_ A composition relationship with the Teacher class, as a course cannot exist without a teacher. _vector<Student>:_ A vector of maximum 18 Student objects (linked with Course through composition), representing the enrolled students. The size of the array was selected, following recommendations from Chingos and Whitehurst, regarding class size for education in the United States. (Chingos, M and Whitehurst, G.J. (2011). _Class Size: What Research Says and What it Means for State Policy._ https://www.brookings.edu/articles/class-size-what-research-says-and-what-it-means-for-state-policy/)
_lab:_ A composition relationship with the Lab class, representing the lab associated with the course.
**Methods:**
_addStudent(student):void:_ this  allows to add an instance of the class Student to the course. 
_removeStudent(studentID):void:_ allows to remove a student with just a Student ID
_getters:_ for all attributes to access them individually
_displayCourseDetails():_ Displays detailed information about the course as a string, including the teacher, students, and lab.

### 5. Lab
**Description:** Represents a laboratory associated with a course.
**Attributes:**
code: The lab's unique identifier.
size: The lab's seat/equipment capacity.
type: The lab's type (computer, bio, chemistry, physics, engineering, etc)
**Methods:**
A setter for the size attribute as it might change over time.
getters to retrieve the attributes individually.
getLabDetails(): Displays the lab's specific details as a string.

## Key Relationships
### 1. Inheritance
**Person** is the superclass for both **Student** and **Teacher**, setting apart common attributes helps to reuse code and make the problem-solving process simpler.
### 2. Composition
**Course** is composed of the following classes:
**Teacher:** A course cannot exist without an associated teacher.
**Students:** A course includes a group of students.
**Lab:** A lab exists as a part of a course (some examples of Lab are science, computer, bio, chemistry and so on).

## System Functionality
**Add New Students and remove them:** Create objects of Student with personalized attributes, using the constructor for each class.
**Modify labSize and teachingHours:** Updates these key attributes for the Lab and Teacher objects.
**Assign Teachers to Courses:** Link a Teacher object to a specific Course.
**Associate Labs with Courses:** Define a Lab and link it to a Course.
**Retrieve Details:** Retrieve a Course's entire information into a string such as associated teacher, students, and lab.


## Usage instructions
Upon starting the program, a menu is displayed with numeric options for the user to select one. The options available are as follow: Add Student (to an existing class), Remove Student (to an existing class), Modify the labSize and modify the teachingHours of a professor. The option to display the information of the course is also available and the sixth option allows the user to exit the program.

## Class diagram
![image](https://github.com/user-attachments/assets/2f980e69-7be7-415e-a870-545f22d1cf71)










