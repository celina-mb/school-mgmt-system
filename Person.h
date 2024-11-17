#ifndef PERSON_H
#define PERSON_H
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;
    string address;

public:
    Person(string name, int age, string address);

    string getName();
    int getAge();
    void setAge(int);
    string getAddress();
    string getPersonData();
};

#endif
