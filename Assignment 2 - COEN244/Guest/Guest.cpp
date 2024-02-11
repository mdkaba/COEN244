//  Guest.cpp
//  Assignment 2 - 27070179
//  Mamadou Kaba
//  Done in Xcode

/*
d) Define a class Guest with the following data members:
The name of the guest as a standard library string.
The date of birth of the guest (from part a).
Number of the room reserved to a guest.
*/

#include <iostream>
#include "Guest.h"
using namespace std;

string Guest::GetName()
{
   return name;
}

Date Guest::GetDateBirth() {return dateBirth;}

int Guest::GetRoomReserved() {return roomNumber;}

void Guest::SetRoomNumber(int roomNumber) {
    this->roomNumber = roomNumber;
}

Guest::Guest(string name, Date datebirth):
   name(name), dateBirth(datebirth) {}
 
Guest::~Guest() {
   cout << "The guest object has been deleted." << endl;
}
