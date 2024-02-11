//  Mamadou Kaba
//  main.cpp
//  Assignment 3 - 27070179
//  Done in Xcode

#include <iostream>
#include "Date.h"
#include "Client.h"
#include "RealEstateAgent.h"
#include "Property.h"
#include "HouseSale.h"
#include "LandSale.h"
#include "ApartmentSale.h"
#include "RealEstateManager.h"
using namespace std;

int main(int argc, const char * argv[]) {
    
    Date date(10, 5, 2019);
    Date monday(28, 10, 2019);
    Date tuesday (29, 10, 2019);
    Date wednesday (30, 10, 2019);
    
    
    
    Client*  mamadou;
    mamadou = new Client("Mamadou", "2913", "12345678");
    
    Client*  Jane;
    Jane = new Client("Jane", "4589", "12345638");
    
    Client*  Ahmed;
    Ahmed = new Client();
    
    Client*  Amina;
    Amina = new Client("Amina", "4589", "12345638");
    
    RealEstateAgent* John;
    John = new RealEstateAgent("John", "Concordia", tuesday, 1686895);
    
    RealEstateAgent* sarata;
    sarata = new RealEstateAgent("sarata", "0435", date, 27070179);
    
    HouseSale* House;
    House = new HouseSale("4600", "Montreal", mamadou, sarata, monday, 5, 3, 10000);
    House->print();
    
    LandSale* Land;
    Land = new LandSale("105", "Montreal", Jane, John, wednesday, 95.15, 25000);
    Land->print();
    
    ApartmentSale* Apartment;
    Apartment= new ApartmentSale("queen-mary", "Montreal", Ahmed , sarata, monday, 12, 5, 32000, 1200);
    Apartment->print();
    
    RealEstateManager Manager;
    
    Manager.insertAgent(sarata);
    Manager.insertAgent(John);
    
    Manager.insertProperty(House);
    Manager.insertProperty(Land);
    Manager.insertProperty(Apartment);
    
    Manager.propertysold(House, Amina);
    
    Manager.findHousesCity("Montreal");
    Manager.findPropertiesAgent(sarata);
    
    return 0;
}
