/**
* Created by Joe Nyugoh Ngigi on 12/30/19 7:08 AM.
* Copyright (c) 2019 Que Base Tech. All rights reserved.
*/

#include <iostream>

using namespace std;

/*
 * Three in One: Describe how you could use a single array to implement three stacks.
 *
 * */

class Stack {
    const int noOfStacks = 3;
    const int stackSize = 10;
    int values[30];
    int sizes[3];
public:

    int indexOfTop(int stackNo) {
        int offset = 30 - (stackNo * stackSize);
        if(isEmpty(stackNo)) {
            cout << "Stack is empty" << endl;
            return 0;
        }
        return offset-1;
    }

    void push(int stackNo, int value)
    {
        if(isFull(stackNo))
        {
            cout << "Stack is full, can't add anything anymore" << endl;
            return;
        }
        int topIndex = indexOfTop(stackNo);
        values[topIndex+1] = value;
        sizes[stackNo] += 1;
    }

    int pop(int stackNo)
    {
        if(isEmpty(stackNo))
        {
            cout << "Stack is empty" << endl;
            return INT8_MAX;
        }
        int topIndex = indexOfTop(stackNo);
        int value = values[topIndex];
        sizes[stackNo]--;
        values[topIndex] = 0;
        return value;
    }

    int top(int stackNo)
    {
       if(isEmpty(stackNo))
       {
           cout << "Stack is empty" << endl;
           return INT8_MAX;
       }
       int topIndex = indexOfTop(stackNo);
       return values[topIndex];

    }

    bool isFull(int stackNo)
    {
        return sizes[stackNo] == stackSize;
    }

    bool isEmpty(int stackNo)
    {
        return sizes[stackNo] == 0;
    }


};

int main()
{

}