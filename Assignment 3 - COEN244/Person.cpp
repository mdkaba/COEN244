//  Mamadou Kaba
//  Person.cpp
//  Assignment 3 - 27070179
//  Done in Xcode

#include "Person.h"
#include <iostream>
using namespace std;

Person::Person() {
    name = " ";
    address = " ";
}
Person::Person(string n, string a) : name(n), address(a) {}

Person::~Person() {}

string Person::getName() const {return name;}
string Person::getAddress() const {return address; }


void Person::setName(string n) {name = n;}
void Person::setAddress(string a) {address = a;}
