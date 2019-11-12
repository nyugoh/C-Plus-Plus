/**
* Created by Joe Nyugoh Ngigi on 11/12/19 7:30 AM.
* Copyright (c) 2019 Que Base Tech. All rights reserved.
*/

#include <iostream>

using namespace std;

/*
 * Stack ~ Operations are done at the top, i.e push, pop
 * OPERATIONS ~
 *      - push() ~ Add element to top
 *      - pop() ~ remove top element and return it
 *      - peek() ~ return the element at the top
 *      - isEmpty() ~
 *      - isFull()
 *  */


const int MAX_SIZE = 20;
int stack[MAX_SIZE] = {0};
int top = -1;

bool isFull()
{
    return top == MAX_SIZE;
}

bool isEmpty()
{
    return top < 0;
}

void push(int data)
{
    if(isFull()){
        cout << "Sorry, stack is full, item can't be added." << endl;
        return;
    }
    top = top +1;
    stack[top] = data;
}

int pop()
{
    int data;
    data = stack[top];
    stack[top] = 0;
    top = top -1;
    return data;
}

int peek()
{
    return stack[top];
}

void print()
{
    cout << "Stack :- [ " ;
    for(int i =0; i <=top; i++){
        cout << stack[i];
        if(i < top)
            cout  << ", ";
    }
    cout << endl;
}

int main(int argvc, char *argv[])
{
    push(20);
    push(21);
    push(22);
    push(23);
    print();
    cout << "Pop :" << pop() << endl;
    print();
    cout << "Peek :" << peek() << endl;
    print();
    return 0;
}