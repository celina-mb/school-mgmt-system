#include "Person.h"
#include <string>
#include <iostream>
using namespace std;

//Constructor
Person::Person(string _name, int _age, string _address) {
  name=_name;
  age=_age;
  address=_address;
}

//getters
string Person::getName() {
  return name;
}

int Person::getAge() {
  return age;
}

string Person::getAddress() {
  return address;
}

//setters
void Person::setName(string _name) {
    name=_name;
}

void Person::setAge(int _age) {
    age=_age;
}

void Person::setAddress(string _address) {
    address=_address;
}

//special method to return all data as a string
string Person::getPersonDetails() {
    return "Name: " + name + ", Age: " + to_string(age) + ", Address: " + address;
}
