#ifndef COURSE_H
#define COURSE_H

#include "Teacher.h"
#include "Student.h"
#include "Lab.h"
#include <string>
#include <vector>
using namespace std;

class Course {
    private:
        //attributes
        int courseKey;
        int courseDuration;
        string courseName;
        Teacher teacher;
        vector<Student> students;
        Lab lab;
    
    public:
        //constructor
        Course(int courseKey, int courseDuration, string courseName, Teacher teacher, Lab lab);

        //getters
        int getCourseKey();
        int getCourseDuration();
        string getCourseName();
        Teacher getTeacher();

        Lab getLab();

        //setters
        void setCourseDuration(int courseDuration);

        //extra methods for student
        void addStudent(Student student);
        void removeStudent(string studentID);

        //get full course data as a string
        string getCourseDetails();
};

#endif
