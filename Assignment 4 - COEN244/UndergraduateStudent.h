//  Mamadou Kaba
//  UndergraduateStudent.hpp
//  Assignment 4 - 27070179
//
//  Created by Mamadou Kaba on 2019-10-30.
//  Copyright © 2019 Mamadou Kaba. All rights reserved.
//  Done in Xcode

#ifndef UndergraduateStudent_h
#define UndergraduateStudent_h

#include <stdio.h>
#include "Student.h"
#include <iostream>
#include <string>
using std::string;
using std::endl;
using std::cout;

// Undergraduate student class

class UndergraduateStudent : public Student {

public:

    UndergraduateStudent(string = " ", int = 0);
    ~UndergraduateStudent();
    
    // checking whether a student has taken or registered to a course.
    virtual bool checking_a_course(string coursenumber);

    // add a course grade to a student’s record.
    virtual bool register_a_course(Grade);

    // dropping a registered course from a student’s record.
    virtual bool dropping_a_course(string coursenumber);
    
    virtual void print() const {
    
        Student::print();
        for (int i = 0; i < max_no_of_courses; i++) {
            if (studentRecord[i] != 0) {
                cout << studentRecord[i];
            }
        }
    }

private:

    static const int max_no_of_courses = 40;
    Grade * studentRecord [max_no_of_courses];

};

#endif /* UndergraduateStudent_hpp */
