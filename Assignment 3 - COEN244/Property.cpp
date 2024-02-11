//  Mamadou Kaba
//  Property.cpp
//  Assignment 3 - 27070179
//  Done in Xcode

#include "Property.h"

Property::Property() {
    
    street_address = " ";
    cityname = " ";
    seller = new Client();
    buyer = nullptr;
    agent = new RealEstateAgent();
    listingdate = Date();

}
Property::Property(string street, string city, Client * sell, RealEstateAgent * ag, Date d){
    street_address = street;
    cityname = city;
    seller = sell;
    agent = ag;
    listingdate = d;
    buyer = nullptr;
    
}
Property::~Property() {
    delete seller;
    delete agent;
}


string Property::getStreetAddress() const {return street_address;}
string Property::getCityName() const {return cityname;}
Date Property::getListingDate() const {return listingdate;}
Client* Property::getBuyer() const {return buyer;}
Client* Property::getSeller() const {return seller;}
RealEstateAgent* Property::getRealEstateAgent() const {return agent;}



void Property::setStreetAddress(string street) {street_address = street;}
void Property::setCityName(string city) {cityname = city;}
void Property::setListingDate(Date d) {listingdate = d;}
void Property::setBuyer(Client* buy) {buyer = buy;}
void Property::setSeller(Client * sell) {seller = sell;}
void Property::setRealEstateAgent(RealEstateAgent * ag) {agent = ag;}


