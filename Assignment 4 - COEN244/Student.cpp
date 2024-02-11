//  Mamadou Kaba
//  Student.cpp
//  Assignment 4 - 27070179
//
//  Created by Mamadou Kaba on 2019-10-30.
//  Copyright © 2019 Mamadou Kaba. All rights reserved.
//  Done in Xcode

#include "Student.h"
#include <iostream>
using namespace std;

Student::Student(string name, int Id) {
    
    this->studentName = name;
    this->studentId = Id;
    for (int i=0; i < no_of_offered_courses; i++) {
        arrayCourse[i] = nullptr;
    }
}

Student::~Student() {
    
    for (int i = 0; i < no_of_offered_courses; i++) {
       if (arrayCourse[i] != nullptr)
           delete arrayCourse[i];
    }
}

string Student::getStudentName() const {return studentName;}
int Student::getStudentId() const {return studentId;}

void Student::setStudentname(string name) {studentName = name;}
void Student::setStudentId(int Id) {studentId = Id;}

bool Student::register_a_course(Grade g) {return true;}
bool Student::dropping_a_course(string coursenumber) {return true;}
