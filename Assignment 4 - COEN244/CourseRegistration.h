//  Mamadou Kaba
//  CourseRegistration.hpp
//  Assignment 4 - 27070179
//
//  Created by Mamadou Kaba on 2019-10-30.
//  Copyright © 2019 Mamadou Kaba. All rights reserved.
//  Done in Xcode

#ifndef CourseRegistration_h
#define CourseRegistration_h

#include "Course.h"
#include <stdio.h>
#include <iostream>
#include <string>
using std::string;
using std::endl;
using std::cout;

class CourseRegistration : public Course {

public:

    CourseRegistration (string, string);
    ~CourseRegistration();
    
    bool register_a_course(int); // Register a student to a course
    bool dropping_a_course(int); // Drop a student registered to a course.
    
    int getNoOfRegisteredStudents() const;
    void setNoOfRegisteredStudents(int);
    
    void print(); // prints course name and number and the student-id of registered // students.

private:

    static const int classSize = 60;
    int registeredtoCourse[classSize]; // this array stores the student-ids of the students // registered to this course.
    int no_of_registeredStudents;

};
#endif /* CourseRegistration_hpp */
