//  Mamadou Kaba
//  GraduateStudent.cpp
//  Assignment 4 - 27070179
//
//  Created by Mamadou Kaba on 2019-10-30.
//  Copyright © 2019 Mamadou Kaba. All rights reserved.
//  Done in Xcode

#include "GraduateStudent.h"
#include <iostream>
using namespace std;
 
GraduateStudent::GraduateStudent(string name, int Id): Student(name, Id) {
    
    for (int j = 0; j < max_number_of_graduatecourses; j++) {
        studentRecord[j] = nullptr;
    }
}

GraduateStudent::~GraduateStudent() {
    
    for (int i = 0; i < max_number_of_graduatecourses; i++) {
        if (studentRecord[i] != nullptr) {
            delete studentRecord[i];
        }
    }
}

bool GraduateStudent::checking_a_course(string coursenumber) {
    for (int j = 0; j < max_number_of_graduatecourses; j++) {
        if (studentRecord[j] != 0)
            if(studentRecord[j]->getCourseNumber() == coursenumber)
                return true;
    }
    return false;
}

bool GraduateStudent::dropping_a_course(string coursenumber) {
    for (int j = 0; j < max_number_of_graduatecourses; j++) {
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

bool GraduateStudent::register_a_course(Grade grade_) {
    for (int j = 0; j < max_number_of_graduatecourses; j++) {
        if (studentRecord[j] == 0) {
            studentRecord[j] = &grade_;
            return true;
        }
    }
    return false;
}
