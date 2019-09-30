//
// Created by joe on 9/29/19.
//

#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

class Employee {
    friend ostream &operator<<(ostream &, const Employee &);

    friend istream &operator>>(istream &, Employee);

    string name;
    double payRate;
};

ostream &operator>>(ostream &out, const Employee &employee) {
    out << "Name:: " << employee.name << " Pay rate:: " << employee.payRate << endl;
    return out;
}

istream &operator>>(istream &in, Employee emp) {
    cout << "Enter name ::";
    in >> emp.name;
    cout << "Pay rate ::";
    in >> emp.payRate;
    return in;
}

int main() {
    const char QUIT = 'n';
    char quitSentel;
    int position;
    Employee userValue;
    vector<Employee> values;

    cout << "Do you want to enter a number, y or n?" << endl;
    cin >> quitSentel;
    while (quitSentel != QUIT) {
        cout << "Enter ::";
        cin >> userValue;
        values.push_back(userValue);
        cout << "Do you want to enter a number, y or n?" << endl;
        cin >> quitSentel;
    }

    cout << "Size of the list is " << values.size() << endl;
    cout << "Elements in the list are(using conventional for loop): " << endl;
    for (int i = 0; i < values.size(); i++)
        cout << values[i] << " " << endl;

    cout << "Elements in the list are: " << endl;
    for (auto a: values)
        cout << a << " " << endl;

    cout << "Enter position to display ::" << endl;
    cin >> position;

    cout << "Value at position values[" << userValue << "] is " << values.at(position) << endl;

}
