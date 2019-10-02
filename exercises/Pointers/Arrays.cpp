//
// Created by joe on 3/23/18.
//
#include <iostream>
using namespace std;

int main()
{
    int ages[5] = {20, 30, 40, 50, 70};

    cout << ages << endl;

    for (int i = 0; i < 5 ; i++) {
        cout << *(ages+i) << endl;
    }
    return 0;
}
