#ifndef COURSE_H
#define COURSE_H

#include <string>

class Course {
private:
    int courseKey;
    int courseSize;
    std::string courseName;
    
public:
    Course(int courseKey, int courseSize, std::string teacherId, std::string courseName, int equipmentId);
    
    string getCourseDetails();
};

#endif
