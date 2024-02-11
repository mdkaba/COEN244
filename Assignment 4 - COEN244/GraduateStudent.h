//  Mamadou Kaba
//  GraduateStudent.hpp
//  Assignment 4 - 27070179
//
//  Created by Mamadou Kaba on 2019-10-30.
//  Copyright © 2019 Mamadou Kaba. All rights reserved.
//  Done in Xcode

#ifndef GraduateStudent_h
#define GraduateStudent_h

#include "Student.h"
#include <stdio.h>
#include <iostream>
#include <string>
using std::string;
using std::endl;
using std::cout;

// Graduate student class

class GraduateStudent : public Student {

public:

    GraduateStudent(string = " ", int = 0);
    ~GraduateStudent();
    
    // checking whether a student has taken or registered to a course.
    virtual bool checking_a_course(string coursenumber);

    // add a course grade to a student’s record.
    virtual bool register_a_course(Grade);

    // dropping a registered course from a student’s record.
    virtual bool dropping_a_course(string coursenumber);
    
    // print student name and student id and student record.
    virtual void print() const {
        
        Student::print();
        for (int i = 0; i < max_number_of_graduatecourses; i++) {
            if (studentRecord[i] != 0) {
                cout << studentRecord[i];
            }
        }
    }

private:

    static const int max_number_of_graduatecourses = 12;
    Grade * studentRecord[max_number_of_graduatecourses];

};
#endif /* GraduateStudent_hpp */
