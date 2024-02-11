//  HotelManager.cpp
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

#include "HotelManager.h"
#include <iostream>
using namespace std;

HotelManager::HotelManager(size_t hotelSize) : hotelSize(hotelSize)
{
   rooms = new Room*[hotelSize];
   for (size_t i = 0; i < hotelSize; ++i) {
       int numberBeds = (i % 2) + 1;
       rooms[i] = new Room(numberBeds, (int)(i + 1));
   }
}

int HotelManager::ProcessReservation(ReservationRequest* resRequest)
{
   for (size_t i = 0; i < hotelSize; ++i)
   {
       if (rooms[i]->GetNumberBed() == resRequest->GetReqNumBeds() && rooms[i]->GetRoomAvailable(resRequest->GetReservationDate()) == 0)
       {
           resRequest->SetResReqNumber();
           rooms[i]->BookRoom(resRequest->GetReservationDate(), resRequest->GetResReqNumber());
           resRequest->GetGuest()->SetRoomNumber(rooms[i]->GetRoomNumber());
           res.push_back(resRequest);
           return resRequest->GetResReqNumber();
       }
   }
   return 0;
}

void HotelManager::ReservationDetails(int resReqNumber)
{
   for (const auto& res : res)
   {
       if (res->GetResReqNumber() == resReqNumber)
       {
           auto resDate = res->GetReservationDate();
           auto checkInDate = res->GetCheckInDate();
           auto checkOutDate = res->GetCheckOutDate();
           cout << "The name of the guest is: " << res->GetGuest()->GetName() << endl << endl;
           cout << "The reservation number is: " << res->GetResReqNumber() << endl << endl;
           cout << "There are " << res->GetReqNumBeds() << " bed(s)" << endl << endl;
           cout << "The Reservation Date is: " << resDate.GetDay() << "/" << resDate.GetMonth() << "/" << resDate.GetYear() << endl;
           cout << "The Check-in Date is: " << checkInDate.GetDay() << "/" << checkInDate.GetMonth() << "/" << checkInDate.GetYear() << endl;
           cout << "The Check-out Date is: " << checkOutDate.GetDay() << "/" << checkOutDate.GetMonth() << "/" << checkOutDate.GetYear() << endl << endl;
       }
   }
}

void HotelManager::CancelReservation(int resReqNumber, Date currentDate)
{
   for (const auto& res : res)
   {
       if (res->GetResReqNumber() == resReqNumber)
       {
           rooms[res->GetGuest()->GetRoomReserved()]->CancelRoom(currentDate);
       }
   }
}

void HotelManager::NumAvailableRooms(Date date)
{
   size_t singleRoom = 0;
   size_t doubleRoom = 0;
   for (size_t i = 0; i < hotelSize; ++i)
   {
       if (rooms[i]->GetRoomAvailable(date) == 0)
       {
           if (rooms[i]->GetNumberBed() == 1)
               singleRoom++;
           if (rooms[i]->GetNumberBed() == 2) {
               doubleRoom++;
           }
               
       }
   }

    cout << "There are "<< singleRoom << " single rooms" << endl;
    cout << "There are "<< doubleRoom << " double rooms" << endl << endl;
}

HotelManager::~HotelManager() {}
