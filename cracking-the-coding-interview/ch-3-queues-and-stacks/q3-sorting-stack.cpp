/**
* Created by Joe Nyugoh Ngigi on 1/8/20 8:10 PM.
* Copyright (c) 2020 Que Base Tech. All rights reserved.
*/
#include <iostream>
#include <stack>

using namespace std;

/*
 * Sort Stack: Write a program to sort a stack such that the smallest items are on the top.
 * You can use an additional temporary stack, but you may not copy the elements into any
 * other data structure (such as an array).
 * The stack supports the following operations: push, pop, peek, and is Empty.
 */

stack<int> sort(stack<int>);

int main()
{
    stack<int> s1({10, 5, 9, 7, 1, 2});
    stack<int> s2;
    s2 = sort(s1);

    cout << "[";
    while(!s1.empty()) {
        cout << s1.top() << " ";
        s1.pop();
    }
    cout << "]"<< endl;

    cout << "[";
    while(!s2.empty())
    {
        cout << s2.top() << " ";
        s2.pop();
    }
    cout << "]"<< endl;
    return 0;
}

stack<int> sort(stack<int> s) {
    stack<int> sorted;
    while(!s.empty()) {
        int top = s.top();
        s.pop();
        while(!sorted.empty() && sorted.top() > top) {
            sorted.push(top);
        }
        if(sorted.empty()) {
            sorted.push(top);
        }
    }
    return sorted;
}