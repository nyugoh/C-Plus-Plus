//
// Created by joe on 3/23/18.
//
#include <iostream>

using namespace std;

class Distance
{
private:
    int feet;
    float inches;
public:
    Distance(): feet(0), inches(0.0) { }

    Distance(int feet, float inches)
    {
        Distance::feet = feet;
        Distance::inches = inches;
    }
    void getDistance();
    void showDistance();
    bool operator < (Distance) const;
};

void Distance::getDistance()
{
    cout << "Enter feet: "; cin >> feet;
    cout << "Enter inches: "; cin >> inches;
}

void Distance::showDistance()
{
    cout << "Feet :: " << feet << "\'" << endl;
    cout << "Inches :: " << inches << "" << endl;
}

bool Distance::operator < (Distance a) const
{
    float d1 = feet + inches/12;
    float d2 = a.feet + a.inches/12;
    cout << d1 << endl;
    cout << d2 << endl;
    return (d1 < d2);
}


int main()
{
    Distance d1, d2(11, 6.25);

    d1.getDistance(); // Set d1
    if (d2 < d1)
        cout << "D2 is less than D1" << endl;
    else
        cout << "D2 is greater than D1" << endl;

    d1.showDistance();
    d2.showDistance();



    return 0;
}
