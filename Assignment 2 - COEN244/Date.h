//  Date.h
//  Assignment 2 - 27070179
//  Mamadou Kaba
//  Done in Xcode

//  a) Define a class Date that has the following data members: month, day and year.

#ifndef Date_h
#define Date_h

#include <stdio.h>
#include <string>
#pragma once
class Date
{
public:
    Date(int day, int month, int year);
    ~Date();
    
    int GetDay();
    int GetMonth();
    int GetYear();

private:
    int month;
    int day;
    int year;
};

#endif /* Date_h */
