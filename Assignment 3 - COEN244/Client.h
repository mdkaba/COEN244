//  Mamadou Kaba
//  Client.h
//  Assignment 3 - 27070179
//  Done in Xcode

#ifndef Client_h
#define Client_h

#include <stdio.h>
#include "Person.h"
using namespace std;


class Client : public Person {

public:
    Client();
    Client(string, string, string);
    ~Client();
    
    virtual void print() {
        Person::print();
        cout << "SIN: " << socialinsurancenumber << endl << endl;
        //cout << "--------------------------------------" << endl;
    }
    
    string getSocialinsurancenumber() const;
    void setSocialinsurancenumber(string);
    
private:
    string socialinsurancenumber;
    
};
#endif /* Client_hpp */
