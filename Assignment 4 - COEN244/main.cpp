//  Mamadou Kaba and Omar Khalifa
//  main.cpp
//  Assignment 4 - 27070179 and 40042424
//
//  Created by Mamadou Kaba on 2019-10-30.
//  Copyright © 2019 Mamadou Kaba. All rights reserved.
//  Done in Xcode

#include "Time.h"
#include "Course.h"
#include "CourseSchedule.h"
#include "Grade.h"
#include "CourseRegistration.h"
#include "Student.h"
#include "UndergraduateStudent.h"
#include "GraduateStudent.h"
#include "DatabaseManager.h"
#include <iostream>
#include <string>
using namespace std;



int main(int argc, const char * argv[]) {
    
    Time time1(9, 2);
    Time time2(8, 3);
    
    cout << time2;
    
    CourseRegistration course1("COEN 244", "Programming II");
    CourseRegistration course2("COEN 212", "Booelean Algebra");
    
    course2.register_a_course(27070179);
    
    course2.print();
    
    course2.dropping_a_course(27070179);
    
    course2.print();
    
    CourseSchedule course3(course1, "COEN 243", time1, time2);
    
    course3.print();
    
    Grade grade1(course1, "A");
    
    Grade grade2(course2, "B");
    
    cout << grade1;
    
    UndergraduateStudent* student1;
    student1 = new UndergraduateStudent("Mamadou", 27070179);
    
    student1->register_a_course(grade1);
    student1->print();
    
    GraduateStudent* student2;
    student2 = new GraduateStudent("Mohamed", 87654321);
    
    student2->register_a_course(grade2);

    DatabaseManager Database;
    
    Database.insert(student1);
    Database.insert(student2);
    Database.registering_to_Course(27070179, grade1);
    Database.registering_to_Course(27070179, grade2);
    Database.print(27070179);
    
    

  
    
    return 0;
}
