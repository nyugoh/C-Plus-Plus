//
// Created by Joe Nyugoh on 01/10/2021.
//

#include "iostream"
#include "stack"
#include "queue"

using namespace std;

void insertBottom(stack<int> *pStack, int top);


void reverseStack(stack<int> *s) {
    if (s->empty()){
        return;
    }
    int top = s->top();
    reverseStack(s);
    insertBottom(s, top);
}

void insertBottom(stack<int> *pStack, int top) {
    pStack->push(top);
}

int main() {
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    cout << "Top::" << s.top() << endl;
    queue<int> q;
    while(!s.empty()) {
       q.push(s.top());
        s.pop();
    }
    while(!q.empty()){
        s.push(q.front());
        q.pop();
    }
    cout << "Top::" << s.top() << endl;
    return 0;
}