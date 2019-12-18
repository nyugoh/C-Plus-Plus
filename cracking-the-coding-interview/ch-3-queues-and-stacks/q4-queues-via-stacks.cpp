/**
* Created by Joe Nyugoh Ngigi on 12/9/19 6:02 PM.
* Copyright (c) 2019 Que Base Tech. All rights reserved.
*/
#include <stack>
#include <iostream>

using namespace std;

/*
 *  Implement a MyQueue class which implements a queue using two stacks.
 *  Solution:-
 *      - For push() operation, simply push to stack 1
 *      - For pop() operation, pop() from s1 and push() into s2, then pop() s2, top(), then return all items in s1
 *
 * */

class MyQueue {
    stack<int> s1, s2;

public:
    bool push(int data) {
        s1.push(data);
        return true;
    }

    int pop() {
        int data = 0;
        // Move all items to s2,
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
        // pick the top one, and pop
        if(!s2.empty()){
            data = s2.top();
            s2.pop();
        }
        // Return all items back to s1
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
        return data;
    }

    int top() {
        int data = 0;
        // Move all items to s2,
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
        // pick the top one
        if(!s2.empty()){
            data = s2.top();
        }
        // Return all items back to s1
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
        return data;
    }
};

int main(int argvc, char *argv[])
{
    MyQueue queue;
    queue.push(10);
    queue.push(9);
    queue.push(8);
    queue.push(7);
    queue.push(6);
    queue.push(5);
    cout << queue.top() << endl;
    queue.pop();
    cout << queue.pop() << endl;
    cout << queue.top() << endl;
    return 0;
}