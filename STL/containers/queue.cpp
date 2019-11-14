/**
* Created by Joe Nyugoh Ngigi on 11/14/19 10:58 PM.
* Copyright (c) 2019 Que Base Tech. All rights reserved.
*/
#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<int> ids;

    ids.push(1);
    ids.push(2);
    ids.push(3);
    ids.push(4);
    ids.push(5);

    cout << "Front item :" << ids.front() << endl;
    cout << "Back item :" << ids.back() << endl;
    ids.pop();
    ids.push(9);
    cout << "Front item :" << ids.front() << endl;
    cout << "Back item :" << ids.back() << endl;

}