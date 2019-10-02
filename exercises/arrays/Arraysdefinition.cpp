//
// Created by joe on 3/22/18.
//
#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 4;
    int age[SIZE];

    for (int &i : age) {
        cout << "Enter age ::" ; cin >> i;
    }
    // Display the input
    for(int i=0;i<SIZE;i++)
    {
        cout << "You entered ::" << age[i] << endl;
    }
    return 0;
}
