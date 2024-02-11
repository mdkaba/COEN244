//  Mamadou Kaba
//  LandSale.cpp
//  Assignment 3 - 27070179
//  Done in Xcode

#include "LandSale.h"
#include <iostream>
using namespace std;

LandSale::LandSale():Property() {
    area = 0.0;
    price = 0;
}

LandSale::LandSale(string street, string city, Client * sell, RealEstateAgent * ag, Date d, double ar, int p): Property(street, city, sell, ag, d) {
    
    area = ar;
    price = p;
}

LandSale::~LandSale() {
}

double LandSale::getArea() const {return area;}
int LandSale::getPrice() const {return price;}

void LandSale::setArea(double ar) { area = ar;}
void LandSale::setPrice(int p) { price = p;}
