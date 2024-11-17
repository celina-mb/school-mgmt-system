#ifndef LAB_H
#define LAB_H
#include <string>
using namespace std;

class Lab{
    private:
    string labType;
    int labSize;

    public:
    Lab(string labType, int labSize);

    string getLabType();
    int getLabSize();
    string getLabDetails();
};

#endif