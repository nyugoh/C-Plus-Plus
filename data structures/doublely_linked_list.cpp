/**
* Created by Joe Nyugoh Ngigi on 11/12/19 2:28 PM.
* Copyright (c) 2019 Que Base Tech. All rights reserved.
*/

#include <iostream>

using namespace std;

/*
 * Doubly Linked List
 * - Is an implementation of a linked list that can be traversed forward and backwards
 * Operation
 *      -insertFirst()
 *      -deleteFirst()
 *      -insertLast()
 *      -deleteLast()
 *      -insertAfter(key)
 *      -deleteAfter(key)
 *      -displayForward()
 *      -displayBackwards()
 *      -isEmpty()
 *      -count()
 * */

class Node
{
public:
    int key;
    int data;
    Node *next;
    Node *prev;
};

Node *head = NULL;
Node *last = NULL;

bool isEmpty()
{
    return head == NULL;
}

void insertFirst(int data){
    Node *newNode = new Node();
    newNode->data = data;
    // if is empty, make it last
    if(isEmpty()){
        last = newNode;
    }else{
        // update pre of old head
        head->prev = newNode;
    }
    // point it to old head
    newNode->next = head;
    //make it new head
    head =  newNode;
}

void insertAt(int data){
    Node *newNode = new Node();
    newNode->data = data;
    if(isEmpty()){
        last = newNode;
        newNode->next = NULL;
        newNode->prev = head;
        head = newNode;
    } else {

    }
}

void insertLast(int data){
    Node *newNode = new Node();
    newNode->data = data;

    if(isEmpty()){
        head = newNode;
    } else {
        last->next = newNode;
    }
    newNode->prev = last;
    newNode->next = NULL;
    last = newNode;
}

int deleteFirst()
{
    Node *tempNode;
   int data;
   if(isEmpty()){
       cout << "List is empty" << endl;
       return -999;
   }
    tempNode = head;
    data = tempNode->data;

    // If list has one item only
    if(head->next == NULL){
        // Make last null
        last = NULL;
    } else {
        head = head->next;
    }
   // Move head forward
   head->prev = NULL;
   return data;
}

void deleteAt(){}

void deleteLast(){}

void displayForward()
{
    Node *tempNode = head;
    cout << "Display forward" << endl;
    cout << "[ " ;
    while(tempNode != nullptr){
        cout << tempNode->data;
        if(tempNode != last)
            cout << " -> ";
        tempNode = tempNode->next;
    }
    cout << " ]" << endl;
}

void displayBackward()
{
    Node *tempNode = last;
    cout << "Display backwards" << endl;
    cout << "[ ";
    while(tempNode != nullptr){
        cout << tempNode->data;
        if(tempNode != head)
            cout << " <- ";
        tempNode = tempNode->prev;
    }
    cout << " ]" << endl;

}

void print()
{
    displayForward();
    displayBackward();
}

int main(int argvc, char *argv[])
{
    insertFirst(10);
    insertFirst(12);
    insertFirst(14);
    insertFirst(16);
    insertFirst(18);
    print();
    cout << "Delete first :" << deleteFirst() << endl;
    cout << "Delete first :" << deleteFirst() << endl;
    print();

    return 0;
}