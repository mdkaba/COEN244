//  main.cpp
//  Assignment 2 - 27070179
//  Mamadou Kaba
//  Done in Xcode

/*
 i) A main function that creates HotelManager, Guest and Reservation Requests objects. It calls to the HotelManager member functions to process all the Reservation Request tasks.
 */

#include <iostream>
#include "HotelManager.h"

int main(int argc, const char * argv[]) {
    
    HotelManager hotelManager(10);
    
    Date guest1(13, 04, 1995);
    
    Guest* guest = new Guest("Mamadou Kaba", guest1);
    
    Date resDate(07, 10, 2019);
    
    Date checkInDate(21, 10, 2019);
    
    Date checkOutDate(28, 10, 2019);

    ReservationRequest* resRequest = new ReservationRequest(guest, resDate, checkInDate, checkOutDate, 2);
    
    hotelManager.ProcessReservation(resRequest);

    hotelManager.ReservationDetails(resRequest->GetResReqNumber());

    hotelManager.NumAvailableRooms(checkInDate);
    
    hotelManager.NumAvailableRooms(resDate);

     delete guest;
    
     delete resRequest;
    
    return 0;
}
