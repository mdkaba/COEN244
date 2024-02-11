//  Mamadou Kaba
//  DatabaseManager.h
//  Assignment 4 - 27070179
//
//  Created by Mamadou Kaba on 2019-10-30.
//  Copyright © 2019 Mamadou Kaba. All rights reserved.
//  Done in Xcode

#ifndef DatabaseManager_h
#define DatabaseManager_h

#include "CourseSchedule.h"
#include "Grade.h"
#include "CourseRegistration.h"
#include "UndergraduateStudent.h"
#include "GraduateStudent.h"
#include <stdio.h>
#include <iostream>
#include <string>
using std::string;
using std::endl;
using std::cout;

class DatabaseManager {
    
    
public:

    DatabaseManager();
    
// insert function adds a new student to the array-student.
    bool insert(Student *);

// delete function removes a student from the array_student with the given student id number.
    bool todelete(int student_id);

// Remove registration of a student with the given student-id parameter and the course number.
    bool dropping_a_Course(int, string);

// Register a student with the given student-id parameter to the course with the given Grade object.
    bool registering_to_Course(int, Grade);
    
// print name, student-id and student record of a student with the given student-id.
    virtual void print(int student_id) {
        
        for (int i = 0; i < max_no_of_students; i++) {
            if (array_student[i] != 0) {
                if (array_student[i]->getStudentId() == student_id) {
                    array_student[i]->print();
                }
            }
        }
    }

// print student ids of all the students taking a course with the given course number.
    virtual void print(string courseNumber) {
        
        for (int i = 0; i < no_of_offered_courses; i++) {
            if (arrayCourse[i] != 0) {
                if (arrayCourse[i]->getCourseNumber() == courseNumber) {
                    arrayCourse[i]->print();
                }
            }
        }
    }

private:

    static const int max_no_of_students = 5000;
    static const int no_of_offered_courses = 400;
    int no_of_students_enrolled; //number of the students at the university
    
    // The following array stores information about the students.
    Student * array_student[max_no_of_students];

// The following array stores course registration information about all the offered courses.
    CourseRegistration * arrayCourse[no_of_offered_courses];

};

#endif /* DatabaseManager_hpp */
