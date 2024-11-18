#ifndef STUDENT_H
#define STUDENT_H
using namespace std;
#include <string>

#include "Person.h" //because of inheritance 
class Student:public Person
{
    private:
    string studentID;
    int semester;
    double avrg;

    public:
    Student(string name, int age, string address, string studentID, int semester, double avrg)
    
    string getStudentID();
    int getSemester();
    int getAvrg();

    void setSemester(int _semester);
    void setAvrg(double _avrg)

    string getStudentDetails();
};

#endif
