//  Mamadou Kaba
//  RealEstateAgent.cpp
//  Assignment 3 - 27070179
//  Done in Xcode

#include "RealEstateAgent.h"
#include <iostream>
using namespace std;

RealEstateAgent::RealEstateAgent() : Person() {
    employment_date = Date();
    employee_id = 0;
}
RealEstateAgent::RealEstateAgent(string n, string a, Date d, int id) : Person(n, a) {
    employment_date = d;
    employee_id = id;
}

RealEstateAgent::~RealEstateAgent() {}


Date RealEstateAgent::getEmploymentDate() const {return employment_date;}
int RealEstateAgent::getEmployeeId() const {return employee_id;}

void RealEstateAgent::setEmploymentDate(Date empdate) { employment_date = empdate;}
void RealEstateAgent::setEmployeeId(int id) {employee_id = id;}
