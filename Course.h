#ifndef COURSE_H
#define COURSE_H

#include <string>
using namespace std;

class Course {
private:
    int courseKey;
    int courseDuration;
    string courseName;
    Teacher teacher;
    Student student;
    Lab lab;

    
public:
    Course(int, int, string, Teacher, Student, Lab);
    
    int getCourseKey();
    int getCourseDuration();
    string getCourseName();
    Teacher getTeacher();
    Student getStudent();
    Lab getLab();
    void setCourseDuration(int);
    void setStudent(Student);
    void setTeacher(Teacher);
    void setLab(Lab);
    string getCourseDetails();
};

#endif
