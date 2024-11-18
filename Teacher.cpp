#include "Teacher.h"
#include <string>
using namespace std;

Teacher::Teacher(string _name, int _age, string _address, string _teacherId, string _teachingHours)
  :Person(_name, _age, _address){
  teacherID = _teacherID;
  teachingHours = _teachingHours;
}

string Teacher::getTeacherID(){
    return teacherID;
}

int Teacher::getTeachingHours(){
    return teachingHours;
}

void Teacher::setTeachingHours(int _teachingHours) {
    teachingHours = _teachingHours;
}

string Teacher::getTeacherDetails(){
    return getPersonDetails() + ", TeacherID: " + teacherID + ", Teaching Hours: " + to_string(teachingHours);
}
