/**
* Created by Joe Nyugoh Ngigi on 3/2/20.
* Copyright (c) 2020 Que Base Tech. All rights reserved.
*/

#include <iostream>

using namespace std;

class Node {
public:
    explicit Node(int data):data(data){
        next = nullptr;
    }
    int data;
    Node *next;
};

/*
 * [front] -> [] -> [] -> [] -> [rear]
 * void enqueue(int) - Add data to rear(end)
 * int dequeue() - Remove and return the node at the front(head)
 * int peek() - Return the node at the front
 * */
class Queue {
public:
    Queue(){
        rear = nullptr;
        front = nullptr;
    }
    Node *rear;
    Node *front;

    void enqueue(int);
    int dequeue();

    int peek();
    bool isEmpty();

    void reverse(Node*, Node*);
    void print();
};

/*
 * Add node to the head
 * */
void Queue::enqueue(int data) {
    Node *newNode = new Node(data);
    // Add new
    if(front == nullptr)
        front = newNode;
    if(rear == nullptr){
        rear = newNode;
        return;
    }
    rear->next = newNode;
    rear = newNode;
}

int Queue::dequeue() {
    if(isEmpty()) return INT8_MAX;
    int data = front->data;
    // delete last node
    Node *tempNode = front;
    front = front->next;
    delete tempNode;
    return data;
}

int Queue::peek() {
    if(isEmpty()){
        cout << "Queue is empty" << endl;
        return INT8_MAX;
    }
    return front->data;
}

bool Queue::isEmpty() {
    return front== nullptr && rear == nullptr;
}

void Queue::print() {
    Node *tempNode = front;
    while(tempNode != nullptr){
        cout << tempNode->data;
        if(tempNode->next != nullptr)
            cout  << "<- ";
        tempNode = tempNode->next;
    }
    cout << endl;
}

void Queue::reverse(Node *node, Node *prevNode) {
    if(node != nullptr && prevNode == nullptr)
        rear = node;
    if(node == nullptr){
        front = prevNode;
        return;
    }
    reverse(node->next, node);
    node->next = prevNode;
}

int main() {
    Queue queue;
    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(30);
    queue.enqueue(40);
    queue.enqueue(50);
    queue.print();

    queue.reverse(queue.front, nullptr);
    queue.print();

    cout << "Dequeue: " << queue.dequeue() << endl;
    queue.print();

    queue.reverse(queue.front, nullptr);
    queue.print();

    cout << "Dequeue: " << queue.dequeue() << endl;
    cout << "Dequeue: " << queue.dequeue() << endl;
    queue.print();

    cout << "Peek: " << queue.peek() << endl;
}