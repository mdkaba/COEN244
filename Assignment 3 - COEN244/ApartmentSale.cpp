//  Mamadou Kaba
//  ApartmentSale.cpp
//  Assignment 3 - 27070179
//  Done in Xcode

#include "ApartmentSale.h"
#include <iostream>
using namespace std;

ApartmentSale::ApartmentSale() : Property() {
    year_of_built = 0;
    no_of_rooms = 0;
    price = 0;
    condominium_fee = 0;
}

ApartmentSale::ApartmentSale(string street, string city, Client * sell, RealEstateAgent * ag, Date d, int yearbuilt, int nbrooms, int p, int fee) : Property(street, city, sell, ag, d) {
    
    year_of_built = yearbuilt;
    no_of_rooms = nbrooms;
    price = p;
    condominium_fee = fee;
    
}

ApartmentSale::~ApartmentSale() {}

int ApartmentSale::getYearOfBuilt() const {return year_of_built;}
int ApartmentSale::getNoOfRooms() const {return no_of_rooms;}
int ApartmentSale::getPrice() const {return price;}
int ApartmentSale::getCondominiumFee() const {return condominium_fee;}

void ApartmentSale::setYearOfBuilt(int yearbuilt) { year_of_built = yearbuilt;}
void ApartmentSale::setNoOfRooms(int nbrooms) { no_of_rooms = nbrooms;}
void ApartmentSale::setPrice(int p) { price = p;}
void ApartmentSale::setCondominiumFee(int fee) { condominium_fee = fee;}
