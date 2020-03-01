/**
* Created by Joe Nyugoh Ngigi on 3/1/20 8:56 PM.
* Copyright (c) 2020 Que Base Tech. All rights reserved.
*/
#include <iostream>

using namespace std;


const int MAX_SIZE = 10;

class Stack {
public:
    Stack() {
        capacity = MAX_SIZE;
        top = -1;
    }
    int capacity;
    int top;
    int array[MAX_SIZE];

    bool isEmpty();
    bool isFull();

    void push(int);
    int pop();

    void print();
    void deleteStack();
};

bool Stack::isEmpty() {
    return top == -1;
}

bool Stack::isFull() {
    return top == capacity-1;
}

void Stack::push(int data) {
    // Check if full, add new data at index of top+1
    if(isFull()) {
        cout << "Stack overflow"<< endl;
        return;
    }
    array[++top] = data;

}

int Stack::pop() {
    if(isEmpty()) return INT8_MAX;
    return array[top--];
}

void Stack::deleteStack() {
    if(isEmpty()) {
        if(array) {
//            delete array;
        }
    }
}

void Stack::print() {
    cout << "[";
    for (int j = 0; j <= top ; ++j) {
        cout << array[j];
        if(j != top) cout << ", ";
    }
    cout << "]" << endl;
}

int main()
{
    Stack stack;
    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.push(40);
    stack.push(50);
    stack.push(60);
    stack.print();
    cout << "Pop: "<<    stack.pop() << endl;
    cout << "Pop: "<<    stack.pop() << endl;
    cout << "Pop: "<<    stack.pop() << endl;
    stack.print();
}