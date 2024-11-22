#ifndef TEACHER_H
#define TEACHER_H

#include <string>
using namespace std;
#include "Person.h"

class Teacher : public Person {
    private:
    string teacherID;
    int teachingHours;

    public:
    Teacher(string name, int age, string address, string teacherID, int teachingHours);

    string getTeacherID();
    int getTeachingHours();

    void setTeachingHours(int hours);

    string getTeacherDetails();
};

#endif
