//  Mamadou Kaba
//  CourseSchedule.cpp
//  Assignment 4 - 27070179
//
//  Created by Mamadou Kaba on 2019-10-30.
//  Copyright © 2019 Mamadou Kaba. All rights reserved.
//  Done in Xcode

#include "CourseSchedule.h"
#include <iostream>
using namespace std;

CourseSchedule::CourseSchedule(Course course_, string prerequisite, Time time1_, Time time2_) {
    
    course = course_;
    coursePrerequisite = prerequisite;
    time1 = time1_;
    time2 = time2_;
    
}

CourseSchedule::~CourseSchedule() {}

Course CourseSchedule::getCourse() const {return course;}
string CourseSchedule::getCoursePrerequisite() const {return coursePrerequisite;}
Time CourseSchedule::getTime1() const {return time1;}
Time CourseSchedule::getTime2() const {return time2;}

void CourseSchedule::setCourse(Course course_) {course = course_;}
void CourseSchedule::setCoursePrerequisite(string prerequisite) {coursePrerequisite = prerequisite;}
void CourseSchedule::setTime1(Time time1_) {time1 = time1_;}
void CourseSchedule::setTime2(Time time2_) {time2 = time2_;}
