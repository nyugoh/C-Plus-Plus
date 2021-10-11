//
// Created by Joe Nyugoh on 01/10/2021.
//

#include "iostream"
#include "deque"

using namespace std;

void printQueue(deque<float>);

int main() {
    deque<float> dq;

    cout << "Push back 10, 11, 12, 12" << endl;
    dq.push_back(10);
    dq.push_back(11);
    dq.push_back(12);
    dq.push_back(13);
    printQueue(dq);

    cout << "Push front 15, 16, 20, 25"<< endl;
    dq.push_front(15);
    dq.push_front(16);
    dq.push_front(20);
    dq.push_front(25);
    printQueue(dq);

    cout << "pop_front twice"<< endl;
    dq.pop_front();
    dq.pop_front();
    printQueue(dq);

    cout << "Pop back twice" << endl;
    dq.pop_back();
    dq.pop_back();
    printQueue(dq);


    return 0;
}

void printQueue(deque<float> queue) {
    deque<float>::iterator it;
    cout << "Queue:: " ;
    for(it=queue.begin(); it < queue.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
}