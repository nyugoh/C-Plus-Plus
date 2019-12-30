/**
* Created by Joe Nyugoh Ngigi on 12/26/19 1:19 PM.
* Copyright (c) 2019 Que Base Tech. All rights reserved.
*/

#include <iostream>
#include "SinglyLinkedList.cpp"
#include "../Node.cpp"

using namespace std;

SinglyLinkedList linkedList;

void insertNode(int data) {
    Node *newNode = new Node(data);

    // If head is empty, make it head
    if(linkedList.head == NULL){
        linkedList.head = newNode;
        return;
    }

    Node *tempNode = linkedList.head;
    while(tempNode->next) {
        tempNode = tempNode->next;
    }

    tempNode->next = newNode;
}

void traverseIteratively() {
    Node *tempNode = linkedList.head;
    while(tempNode) {
        cout << tempNode->data;
        if(tempNode->next != NULL)
            cout << "-->";
        tempNode = tempNode->next;
    }
    cout << endl;
}

void reverseList() {
    Node *tempNode
}

int main()
{
       insertNode(10);
       insertNode(11);
       insertNode(12);
       insertNode(13);
       insertNode(14);

       traverseIteratively();
}