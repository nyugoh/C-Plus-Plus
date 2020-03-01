/**
* Created by Joe Nyugoh Ngigi on 3/1/20 1:13 PM.
* Copyright (c) 2020 Que Base Tech. All rights reserved.
*/

#include <iostream>

using namespace std;

class Node {
public:
    explicit Node(int data):data(data) {
        prev = nullptr;
        next = nullptr;
    }
    int data;
    Node *prev;
    Node *next;
};

class DoublyLinkedList {
public:
    Node *head;

    void insertHead(int);
    void insertEnd(int);
    void insertAt(int, int);

    void traverseIteratively();
    void reverse();
};

void DoublyLinkedList::insertHead(int data) {
    Node *newNode = new Node(data);
    if(head == nullptr) {
        head = newNode;
        cout << "Head inserted successfully..."<< endl;
        return;
    }
    cout << "List is not empty"<< endl;
}

void DoublyLinkedList::insertEnd(int data) {
    // Traverse to the end and the point last node's next to new node and new node's prev to last node
    Node *newNode = new Node(data);
    Node *tempNode = head;
    while(tempNode->next != nullptr) {
        tempNode = tempNode->next;
    }
    // Point last node's next to new node
    tempNode->next = newNode;
    // Point new node's prev to last node
    newNode->prev = tempNode;
}

void DoublyLinkedList::insertAt(int data, int position) {
    // Traverser to position-1, point tmpNode's next to be new node
    Node *newNode = new Node(data);
    Node *tempNode = head;
    int counter = 1;
    // Traverse to position -1
    while(counter < position-1) {
        tempNode = tempNode->next;
        counter ++;
    }
    // Capture next node details
    Node *nextNode = tempNode->next;
    //Shift next node's prev to new node
    newNode->next = nextNode;
    newNode->prev = nextNode->prev;
    nextNode->prev = newNode;
    tempNode->next = newNode;
}

void DoublyLinkedList::traverseIteratively() {
    Node *tempNode = head;
    cout << "Forward traversal..." << endl;
    while(tempNode != nullptr) {
        cout << tempNode->data;
        if(tempNode->next != nullptr) {
            cout << " -->";
            tempNode = tempNode->next;
        } else {
            break;
        }
    }
    cout << "\nBackward traversal..." << endl;
    while(tempNode != nullptr) {
        cout << tempNode->data;
        if(tempNode->prev != nullptr) {
            cout << " <--";
        }
        tempNode = tempNode->prev;
    }
}

void DoublyLinkedList::reverse() {

}


int main()
{
    DoublyLinkedList list{};
    list.insertHead(10);
    list.insertEnd(20);
    list.insertEnd(30);
    list.insertEnd(40);
    list.insertEnd(50);
    list.insertEnd(60);
    list.traverseIteratively();
    cout << endl << "Inserting at position 4..." << endl;
    list.insertAt(35, 4);
    list.traverseIteratively();
}