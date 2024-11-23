#include "Teacher.h"
#include <string>
using namespace std;

//constructor
Teacher::Teacher(string name, int age, string address, string teacherID, int teachingHours)
    : Person(name, age, address), teacherID(teacherID), teachingHours(teachingHours) {}

//getters
string Teacher::getTeacherID() {
    return teacherID;
}

int Teacher::getTeachingHours() {
    return teachingHours;
}

//setter
void Teacher::setTeachingHours(int _teachingHours) {
    teachingHours = _teachingHours;
}

//special getter to retrieve the teacher information as a string
string Teacher::getTeacherDetails() {
    return getPersonDetails() + ", TeacherID: " + teacherID + ", Teaching Hours: " + to_string(teachingHours);
}
