#include "Course.h"

    int getCourseKey();
    int getCourseDuration();
    std::string getCourseName();
    Lab getCourseLab();
    vector<Student> getCourseStudents()


int Course::getCourseKey()
{
    return courseKey;
}

void Course::setTeacher(Teacher t1)
{
    courseTeacher=t1;
}
void Course::addStudent(Student s1)
{
    courseStudents.push_back(s1);
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

Course::Course(int courseKey, int courseSize, std::string teacherId, std::string courseName, int equipmentId)
{
}
