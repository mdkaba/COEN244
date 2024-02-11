//  Mamadou Kaba
//  CourseRegistration.cpp
//  Assignment 4 - 27070179
//
//  Created by Mamadou Kaba on 2019-10-30.
//  Copyright © 2019 Mamadou Kaba. All rights reserved.
//  Done in Xcode

#include "CourseRegistration.h"
#include <iostream>
using namespace std;

CourseRegistration::CourseRegistration(string number, string name) : Course(number, name) {
    
    no_of_registeredStudents = 0;
    for (int i=0; i < classSize; i++)
        registeredtoCourse[i] = NULL;
}

    
CourseRegistration::~CourseRegistration() {}

int CourseRegistration::getNoOfRegisteredStudents() const {return no_of_registeredStudents;}
void CourseRegistration::setNoOfRegisteredStudents(int nbstudent) {no_of_registeredStudents = nbstudent;}

bool CourseRegistration::register_a_course(int student_id) {
    
    for (int i = 0; i < classSize; i++) {
        if (registeredtoCourse[i] == 0) {
            registeredtoCourse[i] = student_id;
            no_of_registeredStudents++;
            return true;
        }
    }
    return false;
}

bool CourseRegistration::dropping_a_course(int student_id) {
    
    for (int i = 0; i < classSize; i++) {
        if (registeredtoCourse[i] == student_id) {
            registeredtoCourse[i] = 0;
            no_of_registeredStudents--;
            return true;
        }
    }
    return false;
    
}

// prints course name and number and the student-id of registered students.
void CourseRegistration::print() {
    
    cout << "Course registration: " << endl;
    Course::print();
    cout << "Student id(s): ";
    for (int i = 0; i < classSize; i++) {
        if (registeredtoCourse[i] != 0) {
            cout <<  registeredtoCourse[i] << endl;
        }
    }
}


