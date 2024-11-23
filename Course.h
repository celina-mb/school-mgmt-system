#ifndef COURSE_H
#define COURSE_H

#include "Teacher.h"
#include "Student.h"
#include "Lab.h"
#include <string>
using namespace std;

const int maxStudents = 18; 

class Course {
private:
    int courseKey;
    int courseDuration;
    string courseName;
    Teacher teacher;
    Student students[maxStudents];
    Lab lab;
    int studentsEnrolled;

    
public:
    Course(int courseKey, int courseDuration, string courseName, Teacher teacher, Lab lab);
    
    int getCourseKey();
    int getCourseDuration();
    string getCourseName();
    Teacher getTeacher();
    Student getStudent();
    Lab getLab();

    void setCourseDuration(int courseDuration);
    void addStudent(Student student);
    void removeStudent(string studentID);
    void setTeacher(Teacher teacher);
    void setLab(Lab lab);

    string getCourseDetails();
};

#endif
