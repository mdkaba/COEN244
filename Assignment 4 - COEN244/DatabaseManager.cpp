//  Mamadou Kaba 
//  DatabaseManager.cpp
//  Assignment 4 - 27070179
//
//  Created by Mamadou Kaba on 2019-10-30.
//  Copyright © 2019 Mamadou Kaba. All rights reserved.
//  Done in Xcode

#include "DatabaseManager.h"
#include <iostream>
using namespace std;

DatabaseManager::DatabaseManager() {
    
    for (auto& student : array_student)
        student = nullptr;
    
    for (auto& registration : arrayCourse)
        registration = nullptr;
    
    
}


// insert function adds a new student to the array-student.
bool DatabaseManager::insert(Student * student_) {
    
    for (int i = 0; i < max_no_of_students; i++) {
        if (array_student[i] == 0) {
            array_student[i] = student_;
            return true;
        }
    }
    return false;
}

// delete function removes a student from the array_student with the given student id number.
bool DatabaseManager::todelete(int student_id) {
    
    for(int i = 0; i < max_no_of_students; i++) {
        if (array_student[i] != 0) {
            if (array_student[i]->getStudentId() == student_id) {
                delete array_student[i];
                array_student[i] = nullptr;
                return true;
            }
        }
    }
    return false;
}


// Remove registration of a student with the given student-id parameter and the course number.
bool DatabaseManager::dropping_a_Course(int student_id, string courseNumber) {
    
    bool dropStatus = false;
    
    for(int i = 0; i < max_no_of_students; i++) {
        if (array_student[i] != 0) {
            if(array_student[i]->getStudentId() == student_id) {
                dropStatus = array_student[i]->dropping_a_course(courseNumber);
                break;
            }
        }
    }
    
    if (dropStatus == true) {
        for (int i = 0; i < no_of_offered_courses; i++) {
            if (arrayCourse[i]->getCourseNumber() == courseNumber) {
                dropStatus = arrayCourse[i]->dropping_a_course(student_id);
                break;
            }
        }
    }
    return dropStatus;
}

// Register a student with the given student-id parameter to the course with the given Grade object.
bool DatabaseManager::registering_to_Course(int student_id, Grade grade_) {
    
    bool regStatus = false;
    
    for (int i = 0; i < max_no_of_students; i++) {
        if (array_student[i] == 0) {
            if (array_student[i]->getStudentId() == student_id) {
                regStatus = array_student[i]->register_a_course(grade_);
                break;
            }
        }
    }
    
    if (regStatus == true) {
        for (int i = 0; i < no_of_offered_courses; i++) {
            if (arrayCourse[i]->getCourseNumber() == grade_.getCourseNumber()) {
                regStatus = arrayCourse[i]->register_a_course(student_id);
                break;
            }
        }
    }
    return regStatus;
}
