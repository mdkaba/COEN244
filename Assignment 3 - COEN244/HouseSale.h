//  Mamadou Kaba
//  HouseSale.h
//  Assignment 3 - 27070179
//  Done in Xcode

#ifndef HouseSale_h
#define HouseSale_h

#include <stdio.h>
#include "Property.h"
#include <iostream>

class HouseSale: public Property

{
public:

    HouseSale();
    HouseSale(string, string, Client *, RealEstateAgent *, Date, int, int, int);
    ~HouseSale();
    
    virtual void print() {
        cout << "--------------------------------------" << endl;
        cout << "House Sale  " << endl;
        cout << "--------------------------------------" << endl;
        Property::print();
        cout << "Year of uilt: " << year_of_built << endl;
        cout << "Numeber of rooms: " << no_of_rooms << endl;
        cout << "Price: " << price << endl << endl;
    }
    
    int getYearOfBuilt() const;
    int getNoOfRooms() const;
    int getPrice() const;
    
    void setYearOfBuilt(int);
    void setNoOfRooms(int);
    void setPrice(int);
    
private:

    int year_of_built;
    int no_of_rooms;
    int price;

};
#endif /* HouseSale_hpp */
