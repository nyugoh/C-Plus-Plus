/**
* Created by Joe Nyugoh Ngigi on 3/1/20 3:29 PM.
* Copyright (c) 2020 Que Base Tech. All rights reserved.
*/

#include <iostream>

using namespace std;

class Node {
public:
    explicit Node(int data):data(data) {
        next = nullptr;
    }
    int data;
    Node *next;
};

class CircularSinglyLinkedList {
public:
    Node *head;

    void insertHead(int);

    void insertEnd(int);

    void insertFront(int);

    void traverseIteratevely();

    void deleteLastNode();
    void deleteFirstNode();
};

void CircularSinglyLinkedList::insertHead(int data) {
    Node *newNode = new Node(data);
    // Point next to itself
    newNode->next = newNode;
    head = newNode;
}

void CircularSinglyLinkedList::insertEnd(int data) {
    Node *newNode = new Node(data);
    Node *tempNode = head;
    while(tempNode->next != head) {
        tempNode = tempNode->next;
    }
    // Point new node's next to head
    newNode->next = head; // or newNode->next = tempNode->next;
    // Point last node's next to new node
    tempNode->next = newNode;
}

void CircularSinglyLinkedList::traverseIteratevely() {
    Node *tempNode = head;
//    cout << head->data << " -> ";
    do {
        cout << tempNode->data;
        if(tempNode->next != head)
            cout << " ->";
        tempNode = tempNode->next;
    } while(tempNode != head);
    cout << endl;
}

void CircularSinglyLinkedList::insertFront(int data) {
    Node *newNode = new Node(data);
    Node *tempNode =  head;
    // Move to end of list
    do {
        tempNode = tempNode->next;
    } while(tempNode->next != head);
    tempNode->next = newNode;
    // Point head to new Node, move to end of list and point it to new node
    newNode->next = head;
    head = newNode;
}

void CircularSinglyLinkedList::deleteLastNode() {
    Node *tempNode = head;
    do {
        tempNode = tempNode->next;
    }while(tempNode->next->next != head);
//    delete tempNode->next->next;
    tempNode->next = head;
}

void CircularSinglyLinkedList::deleteFirstNode() {
    Node *tempNode = head;
    if(head->next == head) {
        delete head;
        return;
    }
    do {
        tempNode = tempNode->next;
    } while(tempNode->next != head);
    head = head->next;
    delete tempNode->next;
    tempNode->next = head;
}

int main()
{
    CircularSinglyLinkedList list{};
    list.insertHead(10);
    list.insertEnd(20);
    list.insertEnd(30);
    list.insertEnd(40);
    list.insertEnd(50);
    list.insertFront(70);
    list.traverseIteratevely();
    list.deleteLastNode();
    list.deleteLastNode();
    list.deleteLastNode();
    list.traverseIteratevely();
    list.deleteFirstNode();
    list.traverseIteratevely();
}