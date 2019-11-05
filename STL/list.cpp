/**
* Created by Joe Nyugoh Ngigi on 10/6/19 12:27 PM.
* Copyright (c) 2019 Que Base Tech. All rights reserved.
*/

#include <iostream>
#include <list>
using namespace std;

void showList(list<int>&);

int main(int argvc, char *argv[])
{
    list<int> l1{10, 40, 50, 20, 60, 90, 10, 20};
    list<int> l2;
    showList(l1);
    l1.sort();
    showList(l1);

    l1.reverse();
    showList(l1);

    l2.assign(l1.begin(), l1.end());
    showList(l2);

    cout << "Size :" << l2.size() << endl;
    l2.merge(l1);
    showList(l2);

    cout << "Size :" << l2.size() << endl;
    l2.unique();
    showList(l2);

    return 0;
}

void showList(list<int>& list)
{
    for(const auto& item: list)
        cout << item << " ";
    cout << endl;
}

