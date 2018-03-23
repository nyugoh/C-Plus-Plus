//
// Created by joe on 3/22/18.
//
#include <iostream>
using namespace std;

class Count
{
private:
    unsigned int count;
public:
    Count(): count(0)
    { }
    unsigned int getCount()
    {
        return count;
    }
    void operator ++ ()
    {
        ++count;
    }
};

int main()
{
    Count c1, c2;

    cout << "C1 ::" << c1.getCount() << endl;
    cout << "C2 ::" << c2.getCount() << endl;

    ++c1;
    ++c2;
    ++c2;

    cout << "After increment ... overloaded operator..." << endl;

    cout << "C1 ::" << c1.getCount() << endl;
    cout << "C2 ::" << c2.getCount() << endl;

    return 0;
}
