#ifndef STUDENT_H
#define STUDENT_H
using namespace std;
#include <string>

#include "Person.h" //because of inheritance 
class Student:public Person {
    private:
        string studentID;
        int semester;
        double avrg;

    public: //constructor
        Student(string name, int age, string address, string studentID, int semester, double avrg)

        //getters
        string getStudentID();
        int getSemester();
        int getAvrg();

        //setters
        void setSemester(int _semester);
        void setAvrg(double _avrg)

        //special method to retrieve all the student data as a string
        string getStudentDetails();
};

#endif
