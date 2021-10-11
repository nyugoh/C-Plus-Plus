//
// Created by Joe Nyugoh on 01/10/2021.
//

#include "iostream"
#include "forward_list"

using namespace  std;

void printList(forward_list<int>);

int main() {
    forward_list<int> l1;
    cout << "Is empty" << l1.empty() << endl;
    printList(l1);
    l1.push_front(10);
    l1.push_front(12);
    l1.push_front(15);
    printList(l1);

    l1.push_front(90);
    l1.push_front(95);
    l1.push_front(99);
    printList(l1);
    l1.pop_front();

    cout << "Is empty::" << l1.empty() << endl;
    cout << "Front::" << l1.front() << endl;
    cout << "Reverse list...."<< endl;
    l1.reverse();
    printList(l1);
    cout << "Front::" << l1.front() << endl;

    cout << "Sorting list..." << endl;
    l1.sort();
    printList(l1);

    cout << "Reverse list...."<< endl;
    l1.reverse();
    printList(l1);

    return 0;
}

void printList(forward_list<int> l1) {
    cout << "List::";
    for (int &i: l1) {
        cout << i << " ";
    }
    cout << endl;
}