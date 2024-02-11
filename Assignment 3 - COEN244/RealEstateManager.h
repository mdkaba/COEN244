//  Mamadou Kaba
//  RealEstateManager.h
//  Assignment 3 - 27070179
//  Done in Xcode

#ifndef RealEstateManager_h
#define RealEstateManager_h

#include <stdio.h>
#include <iostream>
#include "ApartmentSale.h"
#include "LandSale.h"
#include "HouseSale.h"

using namespace std;

class RealEstateManager {

private:

    static const int max_number_of_agents = 30;
    static const int listingsize = 1000;
    static const int archivesize = 2000;

// The followings are array of pointers, all the arrays should be initialized to null values.
    RealEstateAgent * agentRecordsArray[max_number_of_agents];
    Property * propertyListingArray[listingsize];
    Property * archiveRecordsArray[archivesize];

public:
    
    RealEstateManager();
    
    ~RealEstateManager();

// insertAgent function adds a new agent to the agentRecordsArray
    bool insertAgent(RealEstateAgent *);

// insertProperty function adds a property to the first available location in the // propertyListingArray
    bool insertProperty(Property *);

/* When a property is sold, the buyer will be stored in the Property object and the object itself will be transferred from propertyListingArray to the archiveRecordsArray and null value will be inserted at its location at the propertyListingArray.*/

    bool propertysold(Property *, Client *);

/* findHousesCity function determines all the houses for sale in a given city and prints them. String parameter of the function corresponds to a city name.You would need to use dynamic_cast to determine the class of the objects stored in the propertyListingArray. */

    void findHousesCity(string);

// findPropertiesAgent function determines all the listings of an agent and prints them.
    void findPropertiesAgent(RealEstateAgent *);

};
#endif /* RealEstateManager_hpp */
