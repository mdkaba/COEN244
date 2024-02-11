//  Mamadou Kaba
//  Client.cpp
//  Assignment 3 - 27070179
//  Done in Xcode

#include "Client.h"
#include <iostream>
using namespace std;

Client::Client() : Person() {
    socialinsurancenumber = " ";
}

Client::Client(string n, string a, string sin) : Person(n, a) {
    socialinsurancenumber = sin;
}

Client::~Client() {}

string Client::getSocialinsurancenumber() const {return socialinsurancenumber;}

void Client::setSocialinsurancenumber(string sin) { socialinsurancenumber = sin;}
