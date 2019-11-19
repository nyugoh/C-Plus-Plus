/**
* Created by Joe Nyugoh Ngigi on 11/16/19 5:47 PM.
* Copyright (c) 2019 Que Base Tech. All rights reserved.
*/

#include <iostream>
#include <map>
#include <unordered_map>
#include <set>

using namespace std;

class Node {
public:
    int data;
    Node *next;
};

class LinkedList {
public:
    LinkedList() {
        head = NULL;
    }

    Node *head;

/*
 * Using slow and fast pointers, Flyods algo
 * - if they meet at the same point, then there's a loop
 * */
    bool hasLoopUsingTwoPointers()
    {
        bool hasLoop = false;
        Node *slowPtr = head, *fastPtr = head;
        while(fastPtr && slowPtr && fastPtr->next){
            slowPtr = slowPtr->next;
            fastPtr = fastPtr->next->next;
            if(slowPtr == fastPtr){
                hasLoop = true;
                break;
            }
        }
        return hasLoop;
    }

    void push_front(int data)
    {
        Node *newNode = new Node();
        newNode->data = data;
        if(head == NULL){
            head = newNode;;
            return;
        }
        newNode->next = head;
        head = newNode;

    }

    void print()
    {
        Node *tempNode = head;
        while(tempNode){
            cout << tempNode->data;
            if(tempNode->next) cout << " ->";
            tempNode = tempNode->next;
        }
    }

    bool isEmpty()
    {
        return head == NULL;
    }

    void removeDuplicatesInSortedIterative()
    {
        /*
         * While the next node has equal data, move the pointer ahead and remove the next
         * */
        Node *to_free = NULL;
        Node *tempNode = head;
        if(isEmpty()){
            cout << "List is empty" << endl;
            return ;
        }

        while(tempNode){
            // Found a match
            if(tempNode->data == tempNode->next->data){
                // store next in to_free
                to_free = tempNode->next;
                // Skip next that node
                tempNode->next = tempNode->next->next;
                delete to_free;
            }
            tempNode = tempNode->next;
        }
    }

    void removeDuplicatesInSortedRecursive(Node *n)
    {
        Node *tempNode;
        if(!n || !n->next) return;
        if(n->data == n->next->data){
            tempNode = n->next;
            n->next = n->next->next;
            delete tempNode;
            removeDuplicatesInSortedRecursive(n);
        } else {
            removeDuplicatesInSortedRecursive(n->next);
        }
    }

    void removeDuplicatesInUnsorted() {
        set<int> list;
        Node *currentNode = head;
        Node *to_free;
        Node *prevNode = NULL;
        while(currentNode){
            if(list.find(currentNode->data) == list.end()){
                // insert that node
                list.insert(currentNode->data);
                prevNode = currentNode;
                currentNode = currentNode->next;
            } else {
                to_free = currentNode;
                prevNode->next =currentNode->next;
                currentNode = prevNode->next;
                delete to_free;
            }
        }
    }
};

int main(int argvc, char *argv[])
{
    LinkedList linkedList;

    linkedList.head = NULL;

    linkedList.push_front(13);
    linkedList.push_front(13);
    linkedList.push_front(12);
    linkedList.push_front(11);
    linkedList.push_front(11);
    linkedList.push_front(10);
    linkedList.push_front(10);
    linkedList.push_front(9);
    linkedList.print();

//    linkedList.head->next->next->next = linkedList.head;
    if(linkedList.hasLoopUsingTwoPointers())
        cout << "Loop detected"  << endl;
    else
        cout << "No loop" << endl;
    linkedList.removeDuplicatesInSortedIterative();
    linkedList.removeDuplicatesInSortedRecursive(linkedList.head);
    linkedList.removeDuplicatesInUnsorted();
    cout << endl;
    linkedList.print();

    cout << endl;
    LinkedList linkedList1;
    linkedList1.push_front(10);
    linkedList1.push_front(15);
    linkedList1.push_front(7);
    linkedList1.push_front(15);
    linkedList1.push_front(10);
    linkedList1.push_front(7);
    linkedList1.print();
    linkedList1.removeDuplicatesInUnsorted();
    cout << endl;
    linkedList1.print();
    return 0;
}
