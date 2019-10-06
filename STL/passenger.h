/**
* Created by Joe Nyugoh Ngigi on 10/6/19 10:47 AM.
* Copyright (c) 2019 Que Base Tech. All rights reserved.
*/
#ifndef C_PLUS_PLUS_PASSENGER_H
#define C_PLUS_PLUS_PASSENGER_H

#include <iostream>
#include <string>
using namespace std;

class Passenger
{
    friend ostream& operator<<(ostream&, Passenger);
    int amount{};
    string seatNo;
    string name;
    string destination;
public:
    static int passengersOnboard;
    Passenger();
    Passenger(int amount, const string &seatNo, const string &name, const string &destination);
    int getAmount();
    string getSeatNo();
    string getDestination();
    string getName();
};

ostream& operator<<(ostream&, Passenger);


#endif //C_PLUS_PLUS_PASSENGER_H
