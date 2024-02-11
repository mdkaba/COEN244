//  Mamadou Kaba
//  Date.cpp
//  Assignment 3 - 27070179
//  Done in Xcode

#include "Date.h"
#include <iostream>
using namespace std;

Date::Date() {
    
    day = 01;
    month = 01;
    year = 2019;
}
    
Date::Date(int d, int m, int y) : day(d), month(m), year(y) {}

void Date::print() {
    cout << day << "/" << month << "/" << year << endl;
}
Date::~Date() {}

int Date::getMonth() const {return month;}

int Date::getDay() const { return day;}

int Date::getYear() const {return year;}


void Date::setDay(int d) { day = d;}

void Date::setMonth(int m) { month = m;}

void Date::setYear(int y) { year = y;}

