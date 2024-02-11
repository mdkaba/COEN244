//  Mamadou Kaba
//  CourseSchedule.h
//  Assignment 4 - 27070179
//
//  Created by Mamadou Kaba on 2019-10-30.
//  Copyright © 2019 Mamadou Kaba. All rights reserved.
//  Done in Xcode

#ifndef CourseSchedule_h
#define CourseSchedule_h

#include "Time.h"
#include "Course.h"
#include <stdio.h>
#include <iostream>
#include <string>
using std::string;
using std::endl;
using std::cout;

// Each course has one pre-requisite course and it has two lectures per week. The lectures // start on the hour and lasts 50 minutes. An example course schedule may be:

// Monday 2.00pm, Wednesday 4.00pm. Two courses that start on the same day at the // same time will conflict with each other.

class CourseSchedule  {

public:

// In the constructor, the parameters are used to initialize Course object, course pre// requisite and course weekly schedule.

    CourseSchedule(Course ,string ,Time ,Time);
    ~CourseSchedule();
    
    Course getCourse() const;
    string getCoursePrerequisite() const;
    Time getTime1() const;
    Time getTime2() const;
    
    void setCourse(Course);
    void setCoursePrerequisite(string);
    void setTime1(Time);
    void setTime2(Time);

    virtual void print() {
        
        course.print();
        cout << "Course prerequisite: " << coursePrerequisite << endl;
        cout << "Time of the first lecture: " << time1;
        cout << "Time of the second lecture: " << time2 << endl;
        
    }
    
private:

    Course course; // An object of the Course class,
    string coursePrerequisite; // This is the course number of the pre-requisite course, // example “COEN243”
    Time time1; // day and hour of the first lecture
    Time time2; // day and hour of the second lecture

};
#endif /* CourseSchedule_hpp */
