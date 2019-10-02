//
// Created by joe on 3/22/18.
//
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    //Initialize array
    int DSIZE = 2, MONTHS = 3;
    float sales[DSIZE][MONTHS];

    for(int i=0;i<DSIZE;i++){
        cout << "District " << i+1 << endl;
        for(int j=0;j<MONTHS;j++){
            cout << "\tEnter sale total "<< j+1 << " ::"; cin >> sales[i][j];
        }
    }

    // Display
    cout << setw(25) << "Month" << endl;
    for(int i=0;i<MONTHS;i++)
    {
        cout << setw(15) << i+1;
    }
    cout << endl;

    for(int i=0;i<DSIZE;i++){
        cout << "District " << i+1;
        for(int j=0;j<MONTHS;j++)
            cout << setw(10) <<  sales[i][j];
        cout << endl;
    }
    return 0;
}
