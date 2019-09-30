//
// Created by joe on 3/23/18.
//
#include <iostream>
using namespace std;

class Counter
{
protected:
    unsigned int count;
public:
    Counter(): count(0)
    {}
    Counter(int c): count(c)
    {}
    void showCount()
    {
        cout << "Count :: " << count << endl;
    }
    Counter operator ++ ()
    {
        return Counter(++count);
    }
};

class CounterEnhanced : public Counter
{
public:
    CounterEnhanced(): Counter(++count)
    {}

    Counter operator --()
    {
        return {--count};
    }
};


int main()
{
    Counter c1;
    CounterEnhanced c2;
    c1.showCount();

    ++c1;
    ++c1;
    c1.showCount();

    c2.showCount();
    --c2;

    return 0;
}