//
// Created by joe on 9/28/19.
//

#ifndef JOE_OVERLOADING2_H
#define JOE_OVERLOADING2_H

class Store
{
    friend ostream& operator<<(ostream&, Store);
    string name;
    string address;
    int regNumber;

public:
    Store(string, string, int);
};

template <class T>
void repeatValue(T value, int times);

template <class T, class U>
T doubleValue(U);

#endif //JOE_OVERLOADING2_H
