//  Mamadou Kaba
//  UndergraduateStudent.cpp
//  Assignment 4 - 27070179
//
//  Created by Mamadou Kaba on 2019-10-30.
//  Copyright © 2019 Mamadou Kaba. All rights reserved.
//  Done in Xcode

#include "UndergraduateStudent.h"
#include <iostream>
using namespace std;


UndergraduateStudent::UndergraduateStudent(string name, int Id): Student(name, Id) {
    
    for (int j = 0; j < max_no_of_courses; j++) {
        studentRecord[j] = nullptr;
    }
}


UndergraduateStudent::~UndergraduateStudent() {
    
    for (int i = 0; i < max_no_of_courses; i++) {
        if (studentRecord[i] != nullptr) {
            delete studentRecord[i];
        }
    }
}


bool UndergraduateStudent::checking_a_course(string coursenumber) {
    for (int j = 0; j < max_no_of_courses; j++) {
        if (studentRecord[j] != 0)
            if(studentRecord[j]->getCourseNumber() == coursenumber)
                return true;
    }
    return false;
}

bool UndergraduateStudent::dropping_a_course(string coursenumber) {
    for (int j = 0; j < max_no_of_courses; j++) {
        if (studentRecord[j] != 0) {
            if(studentRecord[j]->getCourseNumber() == coursenumber){
                delete studentRecord[j];
                studentRecord[j] = nullptr;
                return true;
            }
        }
    }
    return false;
}

bool UndergraduateStudent::register_a_course(Grade grade_) {
    for (int j = 0; j < max_no_of_courses; j++) {
        if (studentRecord[j] != nullptr) {
            studentRecord[j] = &grade_;
            return true;
        }
    }
    return false;
}

