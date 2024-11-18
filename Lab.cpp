#include "Lab.h"
using namespace std;
#include <string>

Lab::Lab(int _labCode, string _labType, int _labSize){
  labCode=_labCode;
  labType=_labType;
  labSize=_labSize;
}

int Lab::getLabCode(){
    return labCode;
}

string Lab::getLabType(){
    return labType;
}

int Lab::getLabSize(){
    return labSize;
}

void Lab::setLabSize(int labSize) {
    labSize=_labSize;
}

string Lab::getLabDetails(){
    return "Lab Code: " + to_string(labCode) + ", Lab Type: " + labType + ", Lab Size: " + to_string(labSize);
}
