//
// Created by joe on 3/22/18.
//
#include <iostream>
using namespace std;


class SmallObj
{
private:
    int someData;
public:
    void setData(int data)
    {
        someData = data;
    }
    int getData()
    {
        return someData;
    }
};

int main()
{
    SmallObj s1, s2;

    // Set the data
    s1.setData(1000);
    s2.setData(89113);

    // Show the data
    cout << "Value of data in s1 ::" << s1.getData() << endl;
    cout << "Value of data in s2 ::" << s2.getData() << endl;

    return 0;

}

