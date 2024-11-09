#ifndef TEACHER_H
#define TEACHER_H

#include <string>
#include "Course.h"
using namespace std;

class Teacher {
    private:
    string teacherId;
    string courseKey;

    public:
    Teacher(string teacherId, string courseKey);

    string getTeacherDetails();
};

#endif