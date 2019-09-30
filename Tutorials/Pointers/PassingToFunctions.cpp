//
// Created by joe on 3/23/18.
//
#include <iostream>
using namespace std;

void centimizeByReference(double&);

void centimizeByPointer(double*);

int main()
{
    double inches = 12.5;
    double feet = 12;
    cout << "Before centimizeByReference ::" << inches << endl;
    cout << "Before centimizeByPointer ::" << feet << endl;

    centimizeByReference(inches);
    centimizeByPointer(&feet);

    cout << "After centimizeByReference ::" << inches << endl;
    cout << "After centimizeByPointer ::" << feet << endl;

    return 0;
}

void centimizeByReference(double& a)
{
    a *= 2.54;
}

void centimizeByPointer(double* a)
{
    *a *= 2.54;
}