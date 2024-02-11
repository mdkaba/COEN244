//  Guest.hpp
//  Assignment 2 - 27070179
//  Mamadou Kaba
//  Done in Xcode

/*
d) Define a class Guest with the following data members:
The name of the guest as a standard library string.
The date of birth of the guest (from part a).
Number of the room reserved to a guest.
*/

#ifndef Guest_h
#define Guest_h
#include <stdio.h>
#include <string>
#include "Date.h"
#pragma once
class Guest
{
public:
    Guest(std::string name, Date datebirth);
    ~Guest();

    std::string GetName();

    Date GetDateBirth();

    int GetRoomReserved();

    void SetRoomNumber(int roomNumber);
    
private:
    std::string name;
    Date dateBirth;
    int roomNumber;
};

#endif /* Guest_hpp */
