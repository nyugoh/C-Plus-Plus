/**
* Created by Joe Nyugoh Ngigi on 11/14/19 4:33 PM.
* Copyright (c) 2019 Que Base Tech. All rights reserved.
*/
#include <iostream>
#include <array>

using namespace std;

int main(int argvc, char *argv[])
{
    /*
     * array ~ similar to array, just with functions already given
     * */
    array<int, 5> a = {0};
    array<int, 5> b = {0};
    a.fill(10);
    a.at(3) = 20;
    auto it = a.end()-1;
    cout << *it << endl;
    for(auto i= a.begin(); i < a.end(); i++)
        cout << *i << " ";

    b.fill(99);
    a.swap(b);
    for(auto i= a.begin(); i < a.end(); i++)
        cout << *i << " ";

    return 0;
}
