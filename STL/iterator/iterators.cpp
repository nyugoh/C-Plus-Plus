/**
* Created by Joe Nyugoh Ngigi on 11/15/19 12:29 AM.
* Copyright (c) 2019 Que Base Tech. All rights reserved.
*/
#include <iostream>
#include <vector>
#include <list>

using namespace std;

/*
 * iterators are pointers that are independent of the container used
 * container_type <parameter_list>::iterator iterator_name;
 * - distance() ~ return steps btw two pointer, returns an int
 * - next() ~ increment a pointer by specified length, returns a pointer
 * - prev() ~ decrease a pointer by specified length, returns a pointer
 * - advance() ~ increases a pointer by specified length, returns void
 * */
int main()
{
    vector<int> marks{10, 20, 30, 40, 50, 60, 70};
    vector<int>::iterator it;

    list<string> names{"Jane", "Doe", "John", "Doe", "Miller"};
    auto name_it = names.begin();

    //use auto to save typing
    auto it1 = marks.begin();

    // uses next() to increment iterator, prev() ~ does the opposite
    for(it=marks.begin(); distance(marks.begin(), it) <= marks.size();){
        cout << *it << " "; // it is a pointer, use dereference
        // it = next(it, 1);
        advance(it, 2);
        // if you advance more than with one, check the condition part of the for loop.
    }
    cout << endl;

    names.sort();
    names.reverse();
    names.unique();
    for(auto name: names)
        cout << name << ", ";
    cout << endl;
}