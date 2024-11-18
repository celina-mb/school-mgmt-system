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

//métodos setters
void Course::setTeacher(Teacher _teacher)
{
    courseTeacher=_teacher;
}
/*
void Course::addStudent(Student _student)
{
    courseStudents.push_back(_student);
}

void Course::removeStudent(string id)
{
    for(int i=0;)
        //investigar como se hace esto
}
*/
string Course::courseDetails()
{
    return "Course Key: " + to_string(courseKey) + ", Name: " + courseName + ", Duration: " + to_string(courseDuration) + ", "
}
