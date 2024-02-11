//  Mamadou Kaba
//  LandSale.hpp
//  Assignment 3 - 27070179
//  Done in Xcode

#ifndef LandSale_h
#define LandSale_h

#include <stdio.h>
#include "Property.h"
#include <iostream>

class LandSale: public Property {

public:

    LandSale();
    LandSale(string, string, Client *, RealEstateAgent *, Date, double, int);
    ~LandSale();
    
    virtual void print() {
        cout << "--------------------------------------" << endl;
        cout << "Land Sale  " << endl;
        cout << "--------------------------------------" << endl;
        Property::print();
        cout << "Area: " << area << endl;
        cout << "Price: " << price << endl << endl;
    }
    
    double getArea() const;
    int getPrice() const;
    
    void setArea(double);
    void setPrice(int);
private:
    double area;
    int price;

};
#endif /* LandSale_hpp */
