//
// Created by Joe Nyugoh on 01/10/2021.
//

#include "iostream"
#include "list"

using namespace std;

void printList(list<int>);

/* LIST
 * - Represents a doubly linked list
 * - Easy insert & delete
 * - Doesn't waste memory, elements are not stored in a contiguous block
 * */
int main() {
    list<int> l1;
    printList(l1);
    cout << "Is empty::" << l1.empty() << endl;
    l1.push_back(10);
    l1.push_back(12);
    l1.push_back(15);
    printList(l1);

    l1.push_front(90);
    l1.push_front(95);
    l1.push_front(99);
    printList(l1);

    cout << "Size::" << l1.size() << endl;
    cout << "Is empty::" << l1.empty() << endl;
    cout << "Front::" << l1.front() << endl;
    cout << "Back::" << l1.back() << endl;
    cout << "Reverse list...."<< endl;
    l1.reverse();
    printList(l1);
    cout << "Front::" << l1.front() << endl;
    cout << "Back::" << l1.back() << endl;

    cout << "Sorting list..." << endl;
    l1.sort();
    printList(l1);

    cout << "Reverse list...."<< endl;
    l1.reverse();
    printList(l1);

    return 0;
}

void printList(list<int> l1) {
    cout << "List::";
    for (int &i: l1) {
        cout << i << " ";
    }
    cout << endl;
}