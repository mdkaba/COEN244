//  Mamadou Kaba
//  Person.h
//  Assignment 3 - 27070179
//  Done in Xcode

#ifndef Person_hpp
#define Person_hpp

#include <stdio.h>
#include "Date.h"
using namespace std;

class Person {

public:

    Person();
    Person(string, string);
    ~Person();
    
    virtual void print() {
        cout << "name: " << name << endl;
        cout << "address: " << address << endl;

    }
    
    string getName() const;
    string getAddress() const;
    
    void setName(string);
    void setAddress(string);

    
private:
    
    string name;
    string address;
};

#endif /* Person_hpp */
