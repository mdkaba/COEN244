//  Mamadou Kaba
//  Time.hpp
//  Assignment 4 - 27070179
//
//  Created by Mamadou Kaba on 2019-10-30.
//  Copyright © 2019 Mamadou Kaba. All rights reserved.
//  Done in Xcode

#ifndef Time_h
#define Time_h

#include <stdio.h>
#include <iostream>
using std::ostream;
using std:: endl;

class Time {

public:

    Time();
    Time(int, int);
    ~Time();
    
    int getHour() const;
    int getDay() const;
    
    void setHour(int);
    void setDay(int);

    bool operator==(Time&); // Overload the equality operator to test if two Time objects are same.
    
    // Overload the insertion operator to output hour and day data member values.
    friend ostream& operator<<(ostream&, Time&);
    
private:
    
    int hour;
    int day;
    
};
#endif /* Time_hpp */
