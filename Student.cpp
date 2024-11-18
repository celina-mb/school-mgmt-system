#include "Student.h"
#include <string>
using namespace std;

Student::Student(string _name, int _age, string _address, string _studentID, int _semester, double _avrg)
{
    name=_name;
    age=_age;
    address=_address;
    studentID=_studentID;
    semester=_semester;
    avrg=_avrg;
}

string Student::getStudentID(){
    return studentID;
}

int Student::getSemester(){
    return semester;
}

int Student::getAvrg(){
    return avrg;

void Student::setSemester(int _semester){
    semester=_semester;
}

void Student::setAvg(int _avrg){
avg=_avg;
}

string Student::getStudentDetails(){
    return getPersonDetails() + ", StudentID: " + studentID + ", Semester: " + 
           to_string(semester) + ", Average: " + to_string(avrg);
}
