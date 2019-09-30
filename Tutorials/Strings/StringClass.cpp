//
// Created by joe on 3/22/18.
//
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string fullName, nickname, address;
    string greeting("Hello, ");

    // Get full name
    cout << "Enter your full name ::";
    getline(cin, fullName);
    // Display full name
    cout << "Your full name is " << fullName << endl;

    cout << "Enter your nickname ::"; cin >> nickname;
    greeting += nickname;
    cout << greeting;

    // Getting multiple lines
    cout << "Enter your address , \n Terminate with $" << endl;
    getline(cin, address, '$');
    cout << "Address for " << fullName << " is \n" << address << endl;


    return 0;
}
