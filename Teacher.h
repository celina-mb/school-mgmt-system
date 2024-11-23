#ifndef TEACHER_H
#define TEACHER_H

#include <string>
using namespace std;
#include "Person.h" //because of inheritance 

class Teacher : public Person {
    private:
        string teacherID;
        int teachingHours;

    public:
        //constructor
        Teacher(string name, int age, string address, string teacherID, int teachingHours);

        //getters
        string getTeacherID();
        int getTeachingHours();

        //setters (the teacherID won't change from the one assigned by using the constructor)
        void setTeachingHours(int hours);

        //special method to get all details into a string
        string getTeacherDetails();
};

#endif
