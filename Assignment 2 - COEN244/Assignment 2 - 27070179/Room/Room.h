//  Room.hpp
//  Assignment 2 - 27070179
//  Mamadou Kaba
//  Done in Xcode

/*
b) Define a class Room that has the following data members:
Number of beds in the room, (one or two beds).
A two-dimensional 12-by-30 integer array that shows whether the room is available or has been booked for each day of the year. Each row of the array corresponds to a month and for simplicity we assume that the number of days in each month is 30. If the room is available on a given date then the corresponding array element has zero value and if it has been reserved then it has the value of reservation request number.
Room number.
*/

#ifndef Room_h
#define Room_h

#include <stdio.h>
#include "Date.h"

#pragma once
class Room
{
public:
   Room(int numberBeds, int roomNumber);
   ~Room();

   int GetNumberBed();

   int GetRoomAvailable(Date date);

   int GetRoomNumber();

   void BookRoom(Date date, int resReqNumber);

   void CancelRoom(Date date);

private:
   int numberBed;
   int roomAvailable[12][30] = { {0} };
   int roomNumber;
};

#endif /* Room_h */
