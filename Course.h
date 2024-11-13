#ifndef COURSE_H
#define COURSE_H

#include <string>

class Course {
private:
    int courseKey;
    int courseDuration;
    std::string courseName;
    Lab courseLab;
    vector<Student> courseStudents;
    Teacher courseTeacher;
    
public:
    Course(int, int, std::string, Lab, vector<Student>, Teacher);
    
    int getCourseKey();
    int getCourseDuration();
    std::string getCourseName();
    Lab getCourseLab();
    vector<Student> getCourseStudents();
    void addStudent(Student);
    void removeStudent(string);
    Teacher getCourseTeacher();
    void setTeacher(Teacher);
    string getCourseDetails();
};

#endif
