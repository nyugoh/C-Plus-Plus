/**
* Created by Joe Nyugoh Ngigi on 11/9/19 11:15 AM.
* Copyright (c) 2019 Que Base Tech. All rights reserved.
*/

#include <iostream>
#include <unordered_set>
#include "LinkedList.cpp"

using namespace std;

/*
 *  Write code to remove duplicates from an unsorted linked list.
 *  FOLLOW UP
 *  How would you solve this problem if a temporary buffer is not allowed?
 * */

/*
 * Use a hash map to keep track of unque ones, remove any duplicates
 * */

void removeDuplicateM1(Node* head) {
    Node *tempNode = head;
    Node *prevNode = NULL;
    unordered_set<int> set;
    while(tempNode){
        if(set.find(tempNode->data) == set.end()){
            set.insert(tempNode->data);
            prevNode = tempNode;
            tempNode = tempNode->next;
        } else {
            prevNode->next = tempNode->next;
            delete tempNode;
            tempNode = prevNode->next;
        }
    }
}

/*
 * O(1) Space complexity
 * O(N*N) Time complexity
 * */
void removeDuplicateM2(Node *head) {
    Node *prev = NULL, *current, *next = head->next;
    current = head;
    while(current) {
        prev = current;
        next = current->next;
        while(next) {
            if(current->data != next->data) {
                prev = next;
                next = next->next;
            } else {
                prev->next = next->next;
                delete next;
                next = prev->next;
            }
        }
        current = current->next;
    }
}

int main(int argvc, char *argv[])
{
    LinkedList linkedList;
    linkedList.appendNodeToEnd(20);
    linkedList.appendNodeToEnd(21);
    linkedList.appendNodeToEnd(22);
    linkedList.appendNodeToEnd(22);
    linkedList.appendNodeToEnd(21);
    linkedList.appendNodeToEnd(23);
    linkedList.appendNodeToEnd(25);
    linkedList.appendNodeToEnd(22);
    linkedList.appendNodeToEnd(23);
    linkedList.appendNodeToEnd(20);
    linkedList.print();

    removeDuplicateM2(linkedList.head);

    linkedList.print();
    return 0;
}