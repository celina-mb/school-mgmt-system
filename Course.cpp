#include "Course.h"
#include <iostream>
using namespace std;

//constructor creo
Course::Course(int _key, int _duration, string _courseName, Lab _lab, vector<Student> _students, Teacher _teacher){
    int getCourseKey();
    int getCourseDuration();
    string getCourseName();
    Lab getCourseLab();
    vector<Student> getCourseStudents()

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
void Course::addStudent(Student _student)
{
    courseStudents.push_back(_student);
}

void Course::removeStudent(string id)
{
    for(int i=0;)
        //investigar como se hace esto
}

std::string Course::courseDetails()
{
    return std::string();
}
