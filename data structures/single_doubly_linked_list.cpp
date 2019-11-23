/**
* Created by Joe Nyugoh Ngigi on 11/22/19 2:56 PM.
* Copyright (c) 2019 Que Base Tech. All rights reserved.
*/

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;
    Node *prev;
    Node(int d): data(d) {
        next = NULL;
        prev = NULL;
    }
};

/*
 * Double Linked list, allows traversal in both directions
 * Each node has a next and prev node
 * Operations
 *      - Insertion
 *          - at head
 *          - After position P
 *          - at the end
 *      - Count
 *      - Traversal
 *      - Deletion
 *          - at head
 *          - After position P
 *          - at the end
 *      - Delete the whole structure
 * */

Node *head = NULL;
Node *tail = NULL;

bool isEmpty()
{
    return head == NULL;
}

int countNodes()
{
    int count = 0;
    Node *tempNode = head;
    if(isEmpty()) return count;
    while(tempNode->next){
        count ++;
        tempNode = tempNode->next;
    }
    return count;
}

void traverseForward()
{
    Node *tempNode = head;
    while(tempNode->next){
        cout << tempNode->data;
        if(tempNode->next)
            cout << " ==> ";
        tempNode = tempNode->next;
    }
    cout << endl;
}

void traverseBackwards()
{
    Node *tempNode = tail;
    while(tempNode->prev){
        cout << tempNode->data;
        if(tempNode->prev)
            cout << " <== ";
        tempNode = tempNode->prev;
    }
    cout << endl;

}

void insertFront(int data)
{
    Node *newNode = new Node(data);
    if(isEmpty()) {
        newNode->prev = NULL;
        newNode->next = head;
    } else {
        newNode->next = head;
        newNode->prev = head->prev;
        head->prev = newNode;
        head = newNode;
    }
}

void insertBack(int data)
{
    Node *newNode = new Node(data);
    if(isEmpty()){
        cout << "List is empty" << enld;
}

int main(int argvc, char *argv[])
{

    return 0;
}