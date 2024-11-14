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
    Person(string, string, string, int);

    string getName();
    string getLastName();
    string getFullName();
    int getAge();
    string getAdress();
    int setAge(int);
    string getPersonData();
};

#endif
