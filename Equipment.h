#ifndef EQUIPMENT_H
#define EQUIPMENT_H

#include <string>
using namespace std;

class Equipment {
    private:
    string equipmentId;
    string equipmentType;
    int equipmentQuantity;

    public:
    Equipment(int equipmentQuantity, string equipmentType, int equipmentId);

    string getEquipmentDetails();
};
#endif