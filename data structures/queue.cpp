/**
* Created by Joe Nyugoh Ngigi on 11/12/19 8:07 AM.
* Copyright (c) 2019 Que Base Tech. All rights reserved.
*/

#include <iostream>

using namespace std;

/*
 * QUEUE
 * - Follows FIFO, first item in is first item out,
 * Operation :-
 *      - enqueue() ~ Add item to queue, rearof queue
 *      - dequeue() ~ Remove item from queue, front of queue
 *      - peek() ~ Return the item at the front of queue
 *      - isFull()
 *      - isEmpty()
 * */
const int MAX_SIZE = 8;
int queue[MAX_SIZE] = {0};
int front = -1; // Keep track of the position of first element
int rear = -1; // Keep track of last position

bool isEmpty() {
    return front < 0 || front > rear;
}

bool isFull() {
    if (isEmpty())
        return false;
    return rear == MAX_SIZE;
}

/*
 * Add item to queue
 * */
void enqueue(int data) {
    if (isFull()) {
        cout << "Sorry, queue is full, item can't be added." << endl;
        return;
    }
    if (isEmpty()) {
        // Make front the first index/ pointer
        front = 0;
    }
    // Increment rear and assign item
    rear = rear + 1;
    queue[rear] = data;
}

/*
 * Remove the item at the front
 * */
int dequeue()
{
   int data;

   if(isEmpty()){
       cout << "Queue is empty" << endl;
       return 0;
   }
   data = queue[front];
   front = front + 1;
   return data;
}

int peek()
{
    int data;
    if (isEmpty()){
        cout << "Queue is empty." << endl;
        return 0;
    }
    data = queue[rear];
    return data;
}

void print()
{
    cout << "Queue :- ";
    for(int i = front; i<=rear; i++){
        cout << queue[i] << ", ";
    }
    cout << endl;
}

int main(int argvc, char *argv[]) {

    enqueue(10);
    enqueue(12);
    enqueue(14);
    enqueue(16);
    print();
    dequeue();
    print();
    dequeue();
    dequeue();
    cout << "Peek :" << peek() << endl;
    print();
    return 0;
}