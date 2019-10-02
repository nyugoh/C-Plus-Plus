//
// Created by joe on 9/28/19.
//

#include "overloading2.h"

Store::Store(string name, string address, int regNum)
{
    this->name = name;
    this->address = address;
    this->regNumber = regNum;
}

ostream & operator<<(ostream& out, Store store)
{
    out << "Store reg No. " << store.regNumber << " Name:: " << store.name << " Address:: " << store.address << std::endl;
    return out;
}


template <class T>
void repeatValue(T value, int times)
{
    for(auto i=0; i<times; i++)
        std::cout << value << std::endl;
}

template <class T, class U>
T doubleValue(U val)
{
    val *= 2;
    return val;
}