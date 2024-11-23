#ifndef LAB_H
#define LAB_H
#include <string>
using namespace std;

class Lab{
    private:
        //attributes
        int labCode;
        string labType;
        int labSize;

    public:
        //constructor
        Lab(int labCode; string labType, int labSize);

        //setter
        void setLabSize(int labSize);

        //getters
        int getLabCode();
        string getLabType();
        int getLabSize();

        //special getter for all lab data
        string getLabDetails();
};

#endif
