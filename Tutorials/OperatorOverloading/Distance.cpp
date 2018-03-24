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
    Distance operator + (Distance) const;
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

Distance Distance::operator + (Distance d) const
{
    float i = inches + d.inches;
    int f = feet + d.feet;
    if (i >= 12)
    {
        i -= 12.0;
        f ++;
    }
    return Distance(f, i);
}


int main()
{
    Distance d1, d3;
    Distance d2(11, 6.25);

    d1.getDistance(); // Set d1
    d3 = d1 + d2; // Add d1 and d2

    d3.showDistance();

    return 0;
}