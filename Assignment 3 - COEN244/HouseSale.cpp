//  Mamadou Kaba
//  HouseSale.cpp
//  Assignment 3 - 27070179
//  Done in Xcode

#include "HouseSale.h"
#include <iostream>
using namespace std;

HouseSale::HouseSale() : Property() {
    year_of_built = 0;
    no_of_rooms = 0;
    price = 0;
}

HouseSale::HouseSale(string street, string city, Client * sell, RealEstateAgent * ag, Date d, int yearbuilt, int nbrooms, int p) : Property(street, city, sell, ag, d) {
    
    year_of_built = yearbuilt;
    no_of_rooms = nbrooms;
    price = p;
}

HouseSale::~HouseSale() {
}

int HouseSale::getYearOfBuilt() const {return year_of_built;}
int HouseSale::getNoOfRooms() const {return no_of_rooms;}
int HouseSale::getPrice() const {return price;}

void HouseSale::setYearOfBuilt(int yearbuilt) { year_of_built = yearbuilt;}
void HouseSale::setNoOfRooms(int nbrooms) { no_of_rooms = nbrooms;}
void HouseSale::setPrice(int p) { price = p;}
