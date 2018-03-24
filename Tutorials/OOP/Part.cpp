//
// Created by joe on 3/22/18.
//
#include <iostream>
#include <cstring>
using namespace std;

class Part
{
private:
    char name[30];
    int modelNumber;
    int partNumber;
    float cost;
public:
    // Constructor
    Part() : modelNumber(1), partNumber(1), cost(0.0)
    { }

    // Setter function
    void setPart(char name[], int model, int part, float cost)
    {
        strcpy(Part::name, name);
        modelNumber = model;
        partNumber = part;
        Part::cost = cost;
    }

    // Getter functions
    void getName()
    {
        cout << name << endl;
    }
    int getModel()
    {
        return modelNumber;
    }
    int getPartNumber()
    {
        return partNumber;
    }
    float getCost()
    {
        return cost;
    }
};


int main()
{
    Part wheel; // Initialization of the class

    wheel.setPart("Wheel", 3435, 787, 45000.54); // Setter function call

    // Getter functions in action
    cout << "Part Name ::" ;wheel.getName();
    cout << "Model # " << wheel.getModel() << endl;
    cout << "Part # " << wheel.getPartNumber() << endl;
    cout << "Cost # " << wheel.getCost() << endl;

    return 0;
}