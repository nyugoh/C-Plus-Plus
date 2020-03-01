/**
* Created by Joe Nyugoh Ngigi on 3/1/20 11:50 AM.
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

class SinglyLinkedList {
public:
    Node *head;

    void insertHead(int);
    void insertEnd(int);
    void insertAt(int, int);

    void traverseRecursively(Node*);
    void traverseIteratively();

    void deleteNode(int);
};

void SinglyLinkedList::insertHead(int data) {
    // Make sure head is empty, make new node and point head to it
    Node *newNode = new Node(data);
    if(head != nullptr) {
        // Point new node's next to what's pointed to by the head
        newNode->next = head;
    }
    // Make new node the head
    head = newNode;
}

void SinglyLinkedList::insertEnd(int data) {
    // Traverse to the end, then point last node to new node
    Node *newNode = new Node(data);
    Node *tempNode = head;
    // Traverse
    while(tempNode->next != nullptr) {
        tempNode = tempNode->next;
    }
    // Point last node to new node
    tempNode->next = newNode;
}

void SinglyLinkedList::insertAt(int data, int position) {
    // Traverse to certain node and insert there
    Node *newNode = new Node(data);
    Node *tempNode = head;
    int counter = 1;
    while(counter <= position && tempNode->next != nullptr)  {
        tempNode = tempNode->next;
        counter ++;
    }
    tempNode->next = newNode;
}

void SinglyLinkedList::traverseRecursively(Node *node) {
    // Print current node and then call traverse with node->next
    cout << node->data ;
    //Base Case
    if(node->next == nullptr){
        return;
    }
    cout << " -->";
    // Iteratively
    traverseRecursively(node->next);
}

void SinglyLinkedList::traverseIteratively() {

}

void SinglyLinkedList::deleteNode(int) {

}


int main()
{
    SinglyLinkedList list
}