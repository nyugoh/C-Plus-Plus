//
// Created by joe on 3/22/18.
//
#include <iostream>
using namespace std;

class Counter
{
    unsigned int count;
public:
    Counter(): count(0)
    {}
    Counter(int c): count(c)
    {}
    unsigned int getCount()
    {
        return count;
    }
    Counter operator ++ ()
    {
        ++count;
        return Counter(count);
    }
};

int main()
{
    Counter c1, c2;

    cout << "C1 ::" << c1.getCount() << endl;
    cout << "C2 ::" << c2.getCount() << endl;

    ++c1;
    c2 = ++c1;

    cout << "After increment ... overloaded operator..." << endl;

    cout << "C1 ::" << c1.getCount() << endl;
    cout << "C2 ::" << c2.getCount() << endl;

    return 0;
}
