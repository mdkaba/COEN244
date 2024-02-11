//  Mamadou Kaba
//  RealEstateAgent.h
//  Assignment 3 - 27070179
//  Done in Xcode

#ifndef RealEstateAgent_h
#define RealEstateAgent_h

#include <stdio.h>
#include "Person.h"
#include "Date.h"
#include <iostream>
using namespace std;

class RealEstateAgent : public Person {

public:

    RealEstateAgent();
    RealEstateAgent(string, string, Date, int);
    ~RealEstateAgent();
    virtual void print(){
        Person::print();
        cout << "Employment date: " << employment_date.getDay() << "/" << employment_date.getMonth() << "/" << employment_date.getYear() << endl;
        cout << "Employee Id: " << employee_id << endl << endl;
        //cout << "--------------------------------------" << endl;
    }
    
    Date getEmploymentDate() const;
    int getEmployeeId() const;
    
    void setEmploymentDate(Date);
    void setEmployeeId(int);
    
private:

    Date employment_date;
    int employee_id;
    
};
#endif /* RealEstateAgent_hpp */
