#ifndef ADMIN_H
#define ADMIN_H

using namespace std;
#include "Student.h"
#include "Course.h"
#include "Teacher.h"
#include <string>

class Admin{
    private:
    string adminId;
    string role;

    public:
    Admin(string adminId, string role);

    void addStudent(Student _student); //Student is the class and _student the parameter
    void removeStudent(string studentId);
    void updateStudent(Student _student);
    void addTeacher(Teacher _teacher); 
    void removeTeacher(string teacherId);
    void updateTeacher(Teacher _teacher);
    void assignTeacher(Teacher _teacher, Course _course);
    void assignStudent(Student _student, Course _course);
    
};
#endif
