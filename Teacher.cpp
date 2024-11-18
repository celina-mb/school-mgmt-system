#include "Teacher.h"
#include <string>
using namespace std;

Teacher::Teacher(string _name, int _age, string _address, string _teacherId, string _teachingHours){
  :Person(_name, _age, _address)
  teacherID = _teacherID;
  teachingHours = _teachingHours;
}

