//  Room.cpp
//  Assignment 2 - 27070179
//  Mamadou Kaba
//  Done in Xcode

/*
b) Define a class Room that has the following data members:
Number of beds in the room, (one or two beds).
A two-dimensional 12-by-30 integer array that shows whether the room is available or has been booked for each day of the year. Each row of the array corresponds to a month and for simplicity we assume that the number of days in each month is 30. If the room is available on a given date then the corresponding array element has zero value and if it has been reserved then it has the value of reservation request number.
Room number.
*/

#include "Room.h"

Room::Room(int numberBeds, int roomNumber) :
   numberBed(numberBeds), roomNumber(roomNumber){}

Room::~Room(){}

int Room::GetNumberBed(){return numberBed;}

int Room::GetRoomAvailable(Date date) {
   return roomAvailable[date.GetMonth()][date.GetDay()];
}

int Room::GetRoomNumber() {return roomNumber;}

void Room::BookRoom(Date date, int resReqNumber) {
   roomAvailable[date.GetMonth()][date.GetDay()] = resReqNumber;
}

void Room::CancelRoom(Date date) {
   roomAvailable[date.GetMonth()][date.GetDay()] = 0;
}
