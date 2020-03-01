/**
* Created by Joe Nyugoh Ngigi on 3/1/20 9:33 PM.
* Copyright (c) 2020 Que Base Tech. All rights reserved.
*/
#include <iostream>

using namespace std;

class Node {
public:
    explicit Node(int data): data(data) {
        next = nullptr;
    }
    int data;
    Node *next;
};

class LinkedListStack {
public:
    explicit LinkedListStack() {
        head = nullptr;
    }
    Node *head;

    int pop();
    void push(int);
    void print();
};

int LinkedListStack::pop() {
    // Remove head, return it's value
    int data = head->data;
    Node *tempNode = head;
    head = tempNode->next;
    return data;
}

void LinkedListStack::push(int data) {
    //Insert at the front
    Node *newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}

void LinkedListStack::print() {
    Node *tempNode = head;
    while(tempNode != nullptr) {
        cout << tempNode->data;
        if(tempNode->next == nullptr)
            cout << "]" << endl;
        else
            cout << ", ";
        tempNode = tempNode->next;
    }
}

int main()
{
    LinkedListStack stack;
    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.push(40);
    stack.push(50);
    stack.print();

    cout << "Pop:" << stack.pop() << endl;
    cout << "Pop:" << stack.pop() << endl;
    cout << "Pop:" << stack.pop() << endl;
    stack.print();
}