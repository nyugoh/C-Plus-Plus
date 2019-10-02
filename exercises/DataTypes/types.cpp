//
// Created by joe on 3/21/18.
//
#include <iostream>
#include <iomanip>

using namespace std;

int size() {
    cout << "Size of int ::" << sizeof(int) <<endl;
    cout << "Size of char ::" << sizeof(char) <<endl;
    cout << "Size of float ::" << sizeof(float) <<endl;
    cout << "Size of double ::" << sizeof(double) <<endl;
    cout << "Size of wchar_t ::" << sizeof(wchar_t) <<endl;
    return 0;
}

int input() {
    int degrees = 0;
    float farenhiet;
    cout << "Enter temperature in degrees::";
    cin >> degrees;

    farenhiet = (degrees-32) * 5/9;
    cout << "Temperature is :" << degrees << " degrees or " << farenhiet<< " farenhiets" << endl;
    return 0;
}

int main() {
    int population[3] = {20000,40000,600034};
    cout << setw(8) << "Location" << setw(12) << "Population" << endl;
    cout << setw(8) << "Karen" << setw(12) << population[0] << endl;
    cout << setw(8) << "Voi town" << setw(12) << population[1] << endl;
    cout << setw(8) << "Kiambu" << setw(12) << population[2] << endl;
    return 0;
}

