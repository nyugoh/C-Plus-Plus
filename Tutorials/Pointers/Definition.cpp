//
// Created by joe on 3/23/18.
//
#include <iostream>
using namespace std;

int main()
{
    int var1 = 10;
    int var2 = 20;
    int* prt1; // Declaration
    prt1 = &var1; // Assignment

    int* prt2 = &var2;

    cout << prt1 << endl;
    cout << prt2 << endl;

    cout << *prt1*4 << endl; // Accessing the pointed value
    return 0;
}
