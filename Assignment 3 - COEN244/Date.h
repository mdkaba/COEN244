//  Mamadou Kaba
//  Date.h
//  Assignment 3 - 27070179
//  Done in Xcode

#ifndef Date_h
#define Date_h

#include <stdio.h>
#include <iostream>
using namespace std;

class Date {

public:

    Date ();
    Date(int, int, int);
    void print();
    
    ~Date();
    
    int getDay() const;
    int getMonth() const;
    int getYear() const;
    
    void setDay(int);
    void setMonth(int);
    void setYear(int);

private:
    int month;
    int day;
    int year;
    
};
#endif /* Date_hpp */
