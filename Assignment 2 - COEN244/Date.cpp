//  Date.cpp
//  Assignment 2 - 27070179
//  Mamadou Kaba
//  Done in Xcode

// a) Define a class Date that has the following data members: month, day and year.

#include "Date.h"

Date::Date(int day, int month, int year) : day(day), month(month), year(year) {}

Date::~Date() {}

int Date::GetMonth() {return month;}

int Date::GetDay() { return day;}

int Date::GetYear() {return year;}
