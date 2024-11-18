#ifndef LAB_H
#define LAB_H
#include <string>
using namespace std;

class Lab{
    private:
    int labCode;
    string labType;
    int labSize;

    public:
    Lab(int labCode; string labType, int labSize);

    void setLabSize(int labSize);
    int getLabCode();
    string getLabType();
    int getLabSize();
    string getLabDetails();
};

#endif
