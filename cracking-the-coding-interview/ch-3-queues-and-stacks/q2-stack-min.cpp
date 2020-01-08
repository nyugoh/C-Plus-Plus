/**
* Created by Joe Nyugoh Ngigi on 12/30/19 7:45 AM.
* Copyright (c) 2019 Que Base Tech. All rights reserved.
*/

#include <iostream>
#include <stack>

using namespace std;

/*
 * Stack Min: How would you design a stack which, in addition to push and pop, has a function min
 * which returns the minimum element?
 * Push, pop and min should all operate in 0(1) time.
 *
 * */

class Stack {
    stack<int> s1, s2;

public:
    int minElement()
    {
        if(s2.empty())
        {
            cout << "Stacks are empty" << endl;
            return INT8_MAX;
        }
        return s2.top();
    }

    int pop()
    {

        int value = s1.top();
        s1.pop();
        if(value == minElement())
        {
            s2.pop();
        }
        return value;
    }

    void push(int value)
    {
        s1.push(value);
        if(s2.empty()) {
            s2.push(value);
            return;
        }
        if(value < minElement())
        {
            s2.push(value);
        }
    }

    int min()
    {
        if(s1.empty())
        {
            cout << "Stack is empty" << endl;
            return INT8_MAX;
        }
        return s1.top();
    }
};

int main()
{
    Stack stack;
    stack.push(10);
    stack.push(10);
    stack.push(10);
    stack.push(10);
    cout << stack.pop() << endl;
    cout << stack.min() << endl;
    cout << stack.pop() << endl;
}