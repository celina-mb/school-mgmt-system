#include "Course.h"
using namespace std;
Course::Course(int _key, int _duration, string _courseName, Lab _lab, vector<Student> _students, Teacher _teacher){
    int getCourseKey();
    int getCourseDuration();
    std::string getCourseName();
    Lab getCourseLab();
    vector<Student> getCourseStudents()


int Course::getCourseKey()
{
    return courseKey;
}

int Course::getCourseDuration()
{
    return courseDuration;
}
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
