#include "Lab.h"
using namespace std;
#include <string>

//constructor
Lab::Lab(int _labCode, string _labType, int _labSize)
  : labCode(_labCode), labType(_labType), labSize(_labSize) {}

//getters
int Lab::getLabCode() {
    return labCode;
}

string Lab::getLabType() {
    return labType;
}

int Lab::getLabSize() {
    return labSize;
}

//setter
void Lab::setLabSize(int _labSize) {
    labSize=_labSize;
}

// returns all lab data as a string
string Lab::getLabDetails() {
    return "Lab Code: " + to_string(labCode) + ", Lab Type: " + labType + ", Lab Size: " + to_string(labSize);
}
