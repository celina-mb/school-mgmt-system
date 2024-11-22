#include "Course.h"
using namespace std;
#include <string>

//constructor creo
Course::Course(int _courseKey, int _courseDuration, string _courseName, Teacher _teacher, Student _student, Lab _lab){
    courseKey=_courseKey;
    courseDuration=_courseDuration;
    courseName=_courseName;
    teacher=_teacher;
    student=_student;
    lab=_lab;
}

//métodos getters
int Course::getCourseKey()
{
    return courseKey;
}

int Course::getCourseDuration()
{
    return courseDuration;
}

string Course::getCourseName()
{
    return courseName;
}

Teacher Course::getTeacher()
{
    return teacher;
}

Lab Course::getLab()
{
    return lab;
}

//extra methods
void Course::addStudent(const Student& student) {
    if (studentsEnrolled < MAX_STUDENTS) {
        students[studentsEnrolled++] = student;
    }
}

void Course::removeStudent(const std::string& studentID) {
    for (int i = 0; i < studentsEnrolled; ++i) {
        if (students[i].getStudentID() == studentID) {
            for (int j = i; j < studentsEnrolled - 1; ++j) {
                students[j] = students[j + 1];
            }
            --studentsEnrolled;
            return;
        }
    }
}

//setters
void Course::setTeacher(Teacher _teacher)
{
    teacher=_teacher;
}

void Course::setCourseDuration(int _courseDuration)
{
    courseDuration = _courseDuration;
}

//special method to retrieve the entire information of the course
string Course::courseDetails()
{
    string details = "Course Key: " + to_string(courseKey) + ", Name: " + courseName + ", Duration: " + to_string(courseDuration) + "hours.\n"
    details += "Teacher: " + teacher.getTeacherDetails() + "\n";
    details += "Lab: " + lab.getLabDetails() + "\n";
    details += "Enrolled Students: " + std::to_string(studentsEnrolled) + "\n";
    for (int i = 0; i < studentsEnrolled; ++i) {
        details += students[i].getStudentDetails() + "\n";
    }
    return details;    
}
