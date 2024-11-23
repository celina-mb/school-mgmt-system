#include "Student.h"
#include <string>
using namespace std;

//constructor
Student::Student(string name, int age, string address, string studentID, int semester, double avrg)
    : Person(name, age, address), studentID(studentID), semester(semester), avrg(avrg) {}

//getters
string Student::getStudentID() {
    return studentID;
}

int Student::getSemester() {
    return semester;
}

int Student::getAvrg() {
    return avrg;

//setters
void Student::setSemester(int _semester) {
    semester=_semester;
}

void Student::setAvrg(int _avrg) {
avrg=_avrg;
}

//special getter for all the student details
string Student::getStudentDetails() {
    return getPersonDetails() + ", StudentID: " + studentID + ", Semester: " + 
           to_string(semester) + ", Average: " + to_string(avrg);
}
