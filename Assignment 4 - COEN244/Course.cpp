//  Mamadou Kaba
//  Course.cpp
//  Assignment 4 - 27070179
//
//  Created by Mamadou Kaba on 2019-10-30.
//  Copyright © 2019 Mamadou Kaba. All rights reserved.
//  Done in Xcode

#include "Course.h"
#include <iostream>
#include <string>
using namespace std;

Course::Course(string number, string name) {
    
    this->courseNumber = number;
    this->courseName = name;
}

Course::~Course() {}

string Course::getCourseNumber() const {return courseNumber;}
string Course::getCourseName() const {return courseName;}

void Course::setCourseNumber(string number) {courseNumber = number;}
void Course::setCourseName(string name) {courseName = name;}
