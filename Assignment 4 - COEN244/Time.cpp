//  Mamadou Kaba
//  Time.cpp
//  Assignment 4 - 27070179
//  Created by Mamadou Kaba on 2019-10-30.
//  Copyright © 2019 Mamadou Kaba. All rights reserved.
//  Done in Xcode

#include "Time.h"
#include <iostream>
using namespace std;

Time::Time() {
    hour = 0;
    day = 0;
}

Time::Time(int h, int d) {
    hour = h;
    day = d;
}

Time::~Time() {}

int Time::getHour() const {return hour;}
int Time::getDay() const {return day;}

void Time::setHour(int h) {hour = h;}
void Time::setDay(int d) {day =d;}

bool Time::operator== (Time& t) {
    
    return (day == t.getDay() && hour == t.getHour());
}

ostream& operator << (ostream& os, Time& t) {
    
    os << "Hour: " << t.getHour() << " and Day: " << t.getDay() << endl;
    return os;
    
}
    
