//  ReservationRequest.hpp
//  Assignment 2 - 27070179
//  Mamadou Kaba
//  Done in Xcode

/*
e) Define a ReservationRequest class with the following data members,
A pointer to a Guest object from part (d).
An integer counter that generates reservation request numbers.
An integer as a reservation request number. The counter is incremented by one each time a reservation request object is created, then this value is assigned as the reservation request number.
Requested number of beds in the room.
Reservation date from part (a).
The check-in date from part (a).
The check-out date from part (a).
*/

#ifndef ReservationRequest_h
#define ReservationRequest_h

#include <stdio.h>
#include "Guest.h"
#include "Date.h"

#pragma once
class ReservationRequest
{
public:
   ReservationRequest(Guest* guest, Date resDate, Date checkInDate, Date checkOutDate, int numberBeds);
   ~ReservationRequest();

   int GetResReqNumber() const;
   Guest* GetGuest() const;
   int GetReqNumBeds() const;
   Date GetReservationDate() const;
   Date GetCheckInDate() const;
   Date GetCheckOutDate() const;

   void SetResReqNumber();
   void SetGuest(Guest* guest);
    
private:
   int resReqNumber;
   Guest* guest;
   int reqNumBeds;
   Date reservationDate;
   Date checkInDate;
   Date checkOutDate;
   static int COUNTER;
};
#endif /* ReservationRequest_h */
