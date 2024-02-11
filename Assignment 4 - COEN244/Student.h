//  Mamadou Kaba
//  Student.h
//  Assignment 4 - 27070179
//
//  Created by Mamadou Kaba on 2019-10-30.
//  Copyright © 2019 Mamadou Kaba. All rights reserved.
//  Done in Xcode

#ifndef Student_h
#define Student_h

#include <stdio.h>
#include "CourseSchedule.h"
#include "Grade.h"
#include "CourseRegistration.h"
#include <iostream>
#include <string>
using std::string;
using std::endl;
using std::cout;


// Definition of Student class. Each object of this class stores name and id of a student and // his course grades and currently enrolled courses.

class Student {

public:

    Student(string = " ", int = 0);
    ~Student();

    // checking whether a student has taken or registered to a course.
    virtual bool checking_a_course(string coursenumber) = 0;
    
    // add a course grade to a student’s record.
    virtual bool register_a_course(Grade) = 0;
    
    // dropping a registered course from a student’s record.
    virtual bool dropping_a_course(string coursenumber) = 0;
    
    string getStudentName() const;
    int getStudentId() const;
    
    void setStudentname(string);
    void setStudentId(int);

    virtual void print() const {
        
        cout << "Student name: " << studentName << endl;
        cout << "Student Id: " << studentId << endl;
       
    }

private:

    static const int no_of_offered_courses = 400;
    string studentName;
    int studentId;
    
    // The following array stores course scheduling information about all the offered courses.
    CourseSchedule * arrayCourse[no_of_offered_courses];
    
};

#endif /* Student_hpp */
