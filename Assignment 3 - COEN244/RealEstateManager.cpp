//  Mamadou kaba
//  RealEstateManager.cpp
//  Assignment 3 - 27070179
//  Done in Xcode

#include "RealEstateManager.h"
#include <iostream>
using namespace std;

RealEstateManager::RealEstateManager() {
    
    for (int i = 0; i < max_number_of_agents; i++) {
        archiveRecordsArray[i] = nullptr;
    }
    
    for (int i = 0; i < listingsize; i++) {
        propertyListingArray[i] = nullptr;
    }
    
    for (int i = 0; i < archivesize; i++) {
        archiveRecordsArray[i] = nullptr;
    }
}

RealEstateManager::~RealEstateManager() {}

bool RealEstateManager::insertAgent(RealEstateAgent * agentarray) {
    
    for (int i = 0; i < max_number_of_agents; i++) {
        if(agentRecordsArray[i] == nullptr)
            agentRecordsArray[i] = agentarray;
    }
    return true;
}

bool RealEstateManager::insertProperty(Property * property) {
    
    for (int i = 0; i < listingsize; i++) {
        if (propertyListingArray[i] == nullptr)
            propertyListingArray[i] = property;
    }
    return true;
}

bool RealEstateManager::propertysold(Property * soldproperty, Client * buyer) {
    
    soldproperty->setBuyer(buyer);
    for (int i = 0; i < listingsize; i++) {

        if (propertyListingArray[i] == soldproperty) {
            propertyListingArray[i] = nullptr;
        }
    }
    for (int i = 0; i < archivesize; i++)
        if (archiveRecordsArray[i] == nullptr) {
            archiveRecordsArray[i] = soldproperty;
        }
    return true;
}

void RealEstateManager::findHousesCity(string city) {
    
    for (int i = 0; i < listingsize; i++) {
        if (propertyListingArray[i]->getCityName() == city) {
            propertyListingArray[i]->print();
        }
    }
        
}

void RealEstateManager::findPropertiesAgent(RealEstateAgent * agent) {
    for (int i = 0; i < listingsize ; i++) {
        if (propertyListingArray[i]->getRealEstateAgent() == agent) {
            propertyListingArray[i]->print();
        }
    }
}
