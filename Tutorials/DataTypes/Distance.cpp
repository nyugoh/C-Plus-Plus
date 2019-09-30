//
// Created by joe on 3/22/18.
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
    void addDistance(Distance, Distance);
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

void Distance::addDistance(Distance a, Distance b)
{
    inches = a.inches + b.inches;
    feet = 0;
    if (inches >= 12)
    {
        inches -= 12.0;
        feet ++;
    }
    feet += a.feet + b.feet;
}


int main()
{
    Distance d1, d3;
    Distance d2(11, 6.25);

    d1.getDistance(); // Set d1
    d3.addDistance(d1, d2); // Add d1 and d2

    d3.showDistance();



    return 0;
}