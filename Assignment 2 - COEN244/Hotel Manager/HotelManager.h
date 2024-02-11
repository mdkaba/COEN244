//  HotelManager.hpp
//  Assignment 2 - 27070179
//  Mamadou Kaba
//  Done in Xcode

/*
 h) Define a class HotelManager with the following data members,
 A variable hotel_size that specifies the number of rooms in the hotel.
 An array of pointers to the rooms in the hotel.
 An array of pointers to the guests in the hotel.
 At least the following additional member functions should be provided,
 - A member function that processes a reservation request received as a parameter.
 Reservation will be successful, if a room with requested number of beds is available during the requested period. If reservation is successfuI, then it should return reservation request number otherwise zero.
 - A member function that receives a reservation request number as a parameter and outputs the details of the reservation.
 - A member function that receives a reservation request number and current date as parameters and cancels reservation request.
 - A member function that determines number of available single and double rooms on a given date.
 */

#ifndef HotelManager_h
#define HotelManager_h
#include <stdio.h>
#include <vector>
#include "ReservationRequest.h"
#include "Guest.h"
#include "Room.h"
#include "Date.h"
using namespace std;
#pragma once

class HotelManager
{
public:
   HotelManager(size_t hotelSize);
   ~HotelManager();

   int ProcessReservation(ReservationRequest* reservtionRequest);

   void ReservationDetails(int resReqNumber);
   void CancelReservation(int resReqNumber, Date currentDate);
   void NumAvailableRooms(Date date);
private:
   size_t hotelSize;
   Room** rooms;
   Guest* guests;
   vector<ReservationRequest*> res;
};
#endif /* HotelManager_h */
