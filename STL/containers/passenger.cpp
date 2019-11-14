/**
* Created by Joe Nyugoh Ngigi on 10/6/19 10:47 AM.
* Copyright (c) 2019 Que Base Tech. All rights reserved.
*/
#include <iostream>
#include <string>
#include "passenger.h"

ostream &operator<<(ostream &out, Passenger passenger) {
    out << "Passenger\n\tName :: " << passenger.getName() << "\n\tSeat No." << passenger.seatNo << "\n\tDestination :" \
    << passenger.getDestination() << "\n\tPaid:" << passenger.getAmount() << endl;
    return out;
}

int Passenger::passengersOnboard = 0;

int Passenger::getAmount() { return amount; }

string Passenger::getSeatNo() { return seatNo; }

string Passenger::getName() { return name; }

string Passenger::getDestination() { return destination; }

Passenger::Passenger(int amount, const string &seatNo, const string &name, const string &destination)
        : amount(amount),seatNo(seatNo),name(name),destination(destination)
{

    passengersOnboard ++;
    cout << "Member initializer list called" << endl;
    cout  << "People on board ::" << passengersOnboard << endl;
}

Passenger::Passenger()
: amount(1000), seatNo("A0000"), name("Jane Doe"), destination("Mombasa")
{
    cout << "Default constructor used" << endl;
    passengersOnboard ++;
    cout  << "People on board ::" << passengersOnboard << endl;
}
