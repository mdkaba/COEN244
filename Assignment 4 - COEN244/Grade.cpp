//
//  Grade.cpp
//  Assignment 4 - 27070179
//
//  Created by Mamadou Kaba on 2019-10-30.
//  Copyright © 2019 Mamadou Kaba. All rights reserved.
//

#include "Grade.h"
#include <iostream>
using namespace std;

Grade::Grade(Course course_, string grade_) : course(course_), grade(grade_) {}
Grade::~Grade() {}
 
string Grade::getGrade() const {return grade;}
string Grade::getCourseName() const {return course.getCourseName();}
string Grade::getCourseNumber() const {return course.getCourseNumber();}

void Grade::setCourse(Course course_) {course = course_;}
void Grade::setGrade(string grade_) {grade = grade_;}

ostream& operator<<(ostream& os, Grade& grade_) {
    
    os << "Course number: " << grade_.getCourseNumber() << endl;
    os << "Course Name: " << grade_.getCourseName()  << endl;
    os << "Course grade: "<< grade_.getGrade() << endl;
    return os;
}
