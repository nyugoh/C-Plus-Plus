/**
* Created by Joe Nyugoh Ngigi on 10/6/19 10:23 AM.
* Copyright (c) 2019 Que Base Tech. All rights reserved.
*/

#include <iostream>
#include <deque>
#include "passenger.cpp"

using namespace std;


int main(int argvc, char *argv[])
{
    deque<Passenger> train;

    train.push_back(Passenger(700, "A001", "Joe Ngigi", "Mombasa"));
    train.push_front(Passenger());
    train.push_front(Passenger());
    train.push_front(Passenger());
    train.push_front(Passenger());

    for(const auto& passenger: train)
        cout << passenger;

    cout << " All other operation apply here" << endl;

    return 0;
}