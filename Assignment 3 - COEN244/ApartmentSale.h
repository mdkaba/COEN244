//  Mamadou Kaba
//  ApartmentSale.h
//  Assignment 3 - 27070179
//  Done in Xcode

#ifndef ApartmentSale_h
#define ApartmentSale_h

#include <stdio.h>
#include "Property.h"
#include <iostream>
using namespace std;

class ApartmentSale : public Property {

public:

    ApartmentSale();
    ApartmentSale (string, string, Client *, RealEstateAgent *, Date, int, int, int, int);
    ~ApartmentSale();
    virtual void print() {
        cout << "--------------------------------------" << endl;
        cout << "Apartment Sale  " << endl;
        cout << "--------------------------------------" << endl;
        Property::print();
        cout << "Year of uilt: " << year_of_built << endl;
        cout << "Numeber of rooms: " << no_of_rooms << endl;
        cout << "Price: " << price << endl;
        cout << "Condominium Fee: " << condominium_fee << endl << endl;
    }
    
    int getYearOfBuilt() const;
    int getNoOfRooms() const;
    int getPrice() const;
    int getCondominiumFee() const;
    
    void setYearOfBuilt(int);
    void setNoOfRooms(int);
    void setPrice(int);
    void setCondominiumFee(int);

private:

    int year_of_built;
    int no_of_rooms;
    int condominium_fee;
    int price;

};
#endif /* ApartmentSale_hpp */
