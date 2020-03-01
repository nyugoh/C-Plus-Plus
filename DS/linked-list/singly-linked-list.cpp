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

    void reverse(Node*, Node*);

    void checkIsEven();
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
    while(counter < position-1 && tempNode->next != nullptr)  {
        tempNode = tempNode->next;
        counter ++;
    }
    newNode->next = tempNode->next;
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
    Node *tempNode = head;
    while(tempNode != nullptr) {
        cout << tempNode->data;
        if(tempNode->next != nullptr)
            cout << " -->";
        else
            cout << endl;
        tempNode = tempNode->next;
    }
}

void SinglyLinkedList::deleteNode(int position) {
    Node *tempNode = head;
    int counter = 1;
    while(counter < position && tempNode->next != nullptr)  {
        tempNode = tempNode->next;
        counter ++;
    }
    Node *nextNode = tempNode->next;
    if(nextNode != nullptr) {
        tempNode->data = nextNode->data;
        tempNode->next = nextNode->next;
        delete nextNode;
    }
}


void SinglyLinkedList::reverse(Node *node, Node *prevNode) {
    if(node == nullptr) {
        head = prevNode;
        return;
    }
    reverse(node->next, node);
    node->next = prevNode;
}

void SinglyLinkedList::checkIsEven() {
    cout << endl;
    Node *fstPrt = head;
    while(fstPrt && fstPrt->next) {
        fstPrt = fstPrt->next->next;
    }
    if(fstPrt != nullptr)
        cout << "Length is odd" << endl;
    else
        cout << "Length is even" << endl;
}

int main()
{
    SinglyLinkedList list{};
    list.insertHead(10);
    list.insertEnd(20);
    list.insertEnd(30);
    list.insertEnd(40);
    list.insertEnd(50);
    list.insertEnd(60);
    list.insertEnd(70);

    list.traverseRecursively(list.head);
    list.checkIsEven();

    cout << endl << "Inserting 35 at position 3" << endl;
    list.insertAt(35, 3);
    list.traverseRecursively(list.head);
    list.checkIsEven();

    cout << endl << "Deleting position 3..."<< endl;
    list.deleteNode(3);
    list.traverseIteratively();
    list.checkIsEven();

    cout << endl << "Reversing list..."<< endl;
    list.reverse(list.head, nullptr);
    list.traverseIteratively();
    list.checkIsEven();
}