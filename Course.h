#ifndef COURSE_H
#define COURSE_H

#include "Teacher.h"
#include "Student.h"
#include "Lab.h"
#include <string>
using namespace std;

class Course {
private:
    int courseKey;
    int courseDuration;
    string courseName;
    Teacher teacher;
    Student students[18];
    Lab lab;
    int studentsEnrolled;

    
public:
    Course(int courseKey, int courseDuration, string courseName, Teacher teacher, Student student, Lab lab);
    
    int getCourseKey();
    int getCourseDuration();
    string getCourseName();
    Teacher getTeacher();
    Student getStudent();
    Lab getLab();

    void setCourseDuration(int courseDuration);
    void setStudent(Student student);
    void setTeacher(Teacher teacher);
    void setLab(Lab lab);

    string getCourseDetails();
};

#endif
