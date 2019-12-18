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
    linkedList.appendNodeToEnd(23);
    linkedList.print();

    Node *tempNode = linkedList.head;
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

    linkedList.print();
    return 0;
}