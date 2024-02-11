//  Mamadou Kaba
//  Grade.h
//  Assignment 4 - 27070179
//
//  Created by Mamadou Kaba on 2019-10-30.
//  Copyright © 2019 Mamadou Kaba. All rights reserved.
//  Done in Xcode

#ifndef Grade_h
#define Grade_h

#include "Course.h"
#include <stdio.h>
#include <iostream>
#include <string>
using std::ostream;
using std::string;
using std::endl;
using std::cout;

// Definition of Grade class. Each object of the Grade class stores a letter grade for the given course.

class Grade {

public:

    Grade(Course, string);
    ~Grade();
    
    string getGrade() const;
    string getCourseName() const;
    string getCourseNumber() const;
    
    void setCourse(Course);
    void setGrade(string);

// Overload the insertion operator to output the data members of a Grade object.
    friend ostream& operator<<(ostream&, Grade&);


private:

    Course course;
    string grade; // // course grades are A,B, C, D, F and I ( // I is the grade for currently enrolled courses)

};
#endif /* Grade_hpp */
