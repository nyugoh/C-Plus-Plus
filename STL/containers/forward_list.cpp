/**
* Created by Joe Nyugoh Ngigi on 11/14/19 4:39 PM.
* Copyright (c) 2019 Que Base Tech. All rights reserved.
*/
#include <iostream>
#include <forward_list>
using namespace std;

int main(int argvc, char *argv[])
{
    /*
     * forward_list ~ singly linked list
     * */
    forward_list<int> marks;
    marks.push_front(10);
    marks.push_front(11);
    marks.insert_after(marks.begin(), 44);
    marks.insert_after(marks.begin(), 55);
    marks.insert_after(marks.begin(), 77);
    for(auto i: marks) cout << i << " ";
    cout << endl;
    marks.reverse();
    for(auto i: marks) cout << i << " ";
    cout << endl;
    return 0;
}
