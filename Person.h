#ifndef PERSON_H
#define PERSON_H
#include <string>
using namespace std;

class Person {
protected:
    string name;
    string lastName;
    string address;
    int age;

public:
    Person(string name, string lastName, string address, int age);

    string getPersonDetails();
};

#endif