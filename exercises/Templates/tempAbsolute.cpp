//
// Created by joe on 3/25/18.
//
#include <iostream>
using namespace std;

template <class T>
T absoluteTemperature(T t)
{
    return t<0?-t:t;
}

int main()
{
    int t1 = 10;
    int t2 = -45;
    long t3 = 70000l;
    long t4 = -80000l;
    float t5 = 450.45;
    double t6 = -450.45;

    cout << t1 << " ===> " << absoluteTemperature(t1) << endl;
    cout << t2 << " ===> " << absoluteTemperature(t2) << endl;
    cout << t3 << " ===> " << absoluteTemperature(t3) << endl;
    cout << t4 << " ===> " << absoluteTemperature(t4) << endl;
    cout << t5 << " ===> " << absoluteTemperature(t5) << endl;
    cout << t6 << " ===> " << absoluteTemperature(t6) << endl;

    return 0;
}
