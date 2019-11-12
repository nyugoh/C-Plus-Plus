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

}

void insertLast(int data){}

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


   // Move head forward
   head = head->next;
   head->prev = NULL;
   return data;
}

void deleteAt(){}

void deleteLast(){}

void displayForward()
{

}

void displayBackward()
{

}

int main(int argvc, char *argv[])
{


    return 0;
}