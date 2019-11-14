/**
* Created by Joe Nyugoh Ngigi on 11/14/19 4:17 PM.
* Copyright (c) 2019 Que Base Tech. All rights reserved.
*/

#include <iostream>

using namespace std;

int main(int argvc, char *argv[])
{
    /*
     * pair<T, T>
     * */
    pair<int, int> p1, p2;
    pair<int, string> p3 = {1, "Jane doe"};

    // make_pair();
    p1 = make_pair(1, 892);
    p2 = make_pair(1, 893);

    cout << p1.first << endl;
    cout << p2.second << endl;
    cout << p3.first << " =>" << p3.second << endl;
    return 0;
}
