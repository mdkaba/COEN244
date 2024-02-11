//  Mamadou Kaba
//  Course.h
//  Assignment 4 - 27070179
//
//  Created by Mamadou Kaba on 2019-10-30.
//  Copyright © 2019 Mamadou Kaba. All rights reserved.
//  Done in Xcode

#ifndef Course_h
#define Course_h

#include <stdio.h>
#include <iostream>
#include <string>
using std::string;
using std::endl;
using std::cout;

// Definition of the Course class. Each object of the Course class stores name and // the number of a course.

class Course {

public:

// In the constructor, the parameters are used to initialize courseNumber, courseName.

    Course(string = " ", string = " "); // parameters for course number and name.
    ~Course();
    
    string getCourseNumber() const;
    string getCourseName() const;
    
    void setCourseNumber(string);
    void setCourseName(string);
    
    virtual void print() {
        
        cout << "Course number: " << courseNumber << endl;
        cout << "Course name: " << courseName << endl;
        
    }
    
private:

    string courseNumber; // example: courseNumber = “COEN 244”
    string courseName; // example: courseName = “ProgrammingMethodology”

};

#endif /* Course_hpp */
