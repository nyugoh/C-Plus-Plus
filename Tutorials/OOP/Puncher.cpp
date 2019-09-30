//
// Created by joe on 3/22/18.
//
#include <iostream>
using namespace std;

static int totalItems = 0;

class Item
{
    int serialNumber;

public:
    Item()
    {
        serialNumber = totalItems + 1;
        totalItems ++;
    }

    void displaySerialNumber()
    {
        cout << "Am object number " << serialNumber << ", there are " << totalItems << " total items." << endl;
    }
};

int main()
{
    Item i1, i2, i3, i4;

    i1.displaySerialNumber();
    i2.displaySerialNumber();
    i3.displaySerialNumber();
    i4.displaySerialNumber();

    return 0;
}
