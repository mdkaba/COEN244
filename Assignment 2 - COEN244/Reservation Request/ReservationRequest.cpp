//  ReservationRequest.cpp
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

#include "ReservationRequest.h"
#include <iostream>
using namespace std;

ReservationRequest::ReservationRequest(Guest * guest, Date resDate, Date checkInDate, Date checkOutDate, int numberBeds) :
   guest(guest),
   reservationDate(resDate),
   checkInDate(checkInDate),
   checkOutDate(checkOutDate),
   reqNumBeds(numberBeds) {}

ReservationRequest::~ReservationRequest()
{
    cout << "The Reservation Request object has been deleted." << endl;
}

int ReservationRequest::GetResReqNumber() const {
   return resReqNumber;
}

Guest* ReservationRequest::GetGuest() const {
   return guest;
}

int ReservationRequest::GetReqNumBeds() const {
   return reqNumBeds;
}

Date ReservationRequest::GetReservationDate() const {
   return reservationDate;
}

Date ReservationRequest::GetCheckInDate() const {
   return checkInDate;
}

Date ReservationRequest::GetCheckOutDate() const {
   return checkOutDate;
}

void ReservationRequest::SetResReqNumber() {
   resReqNumber = ++COUNTER;
}

void ReservationRequest::SetGuest(Guest * guest) {
   this->guest = guest;
}

int ReservationRequest::COUNTER = 0;
