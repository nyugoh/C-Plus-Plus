//
// Created by joe on 3/22/18.
//
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int MAX = 20;
    char str[MAX];
    char name[MAX];

    cout << "Enter a string with spaces ::"; cin.get(name, MAX);
    cout << "Your string with spaces is " << name << endl;

    cout << "Enter a string ::"; cin >> setw(MAX) >> str;
//    Use setw(length) to limit user from typing excess characters

    cout << "You entered the string :: " << str;


    return 0;
}
