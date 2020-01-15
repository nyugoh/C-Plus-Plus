//
// Created by joe on 1/15/20.
//
#include <iostream>
#include "SinglyLinkedList.cpp"
#include "../Node.cpp"

using namespace std;

Node* reverseList(SinglyLinkedList);

void print(Node *head) {
    Node *tempNode = head;
    while(tempNode) {
        cout << tempNode->data;
        if(tempNode->next != NULL) cout << "->";
        tempNode = tempNode->next;
    }
    cout << endl;
}

int main() {
    SinglyLinkedList linkedList;
    linkedList.head = new Node(1);
    Node *next = new Node(2);
    next->next = new Node(3);
    next->next->next = new Node(4);
    next->next->next->next = new Node(5);
    linkedList.head->next = next;
    print(linkedList.head);
    linkedList.head = reverseList(linkedList);
    print(linkedList.head);
    return 0;
}

/*
 * 1->2->3->4->5->NULL
 * NULL<-1<-2
 * */
Node* reverseList(SinglyLinkedList list) {
    Node *prev = NULL, *current = list.head, *next = NULL;
    while(current) {
        next = current->next;
        current->next = prev;
        if(next == NULL) {
           list.head = current;
        }
        prev = current;
        current = next;
    }
    return list.head;
}