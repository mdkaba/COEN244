//  Mamadou Kaba
//  Property.h
//  Assignment 3 - 27070179
//  Done in Xcode

#ifndef Property_h
#define Property_h

#include <stdio.h>
#include "RealEstateAgent.h"
#include "Client.h"

class Property {

public:

    Property();
    Property(string, string, Client *, RealEstateAgent *, Date);
    ~Property();
    virtual void print(){
        cout << "Street address: " << street_address << endl;
        cout << "City: " << cityname << endl << endl;
        cout << "Seller information " << endl;
        seller->print();
        cout << "Agent information " << endl;
        agent->print();
        cout << "Linsting date: " << listingdate.getDay() << "/" << listingdate.getMonth() << "/" << listingdate.getYear() << endl;
    }
    
    string getStreetAddress() const;
    string getCityName() const;
    Date getListingDate() const;
    Client* getBuyer() const;
    Client* getSeller() const;
    RealEstateAgent* getRealEstateAgent() const;
    
    void setStreetAddress(string);
    void setCityName(string);
    void setListingDate(Date);
    void setBuyer(Client *);
    void setSeller(Client *);
    void setRealEstateAgent(RealEstateAgent *);
    
private:
    
    Client* seller; // Initialized to the Client parameter of the constructor function.
    Client* buyer; // Initialized to a null pointer.
    RealEstateAgent* agent;
    Date listingdate;
    string street_address;
    string cityname;
    
    
};
#endif /* Property_hpp */
