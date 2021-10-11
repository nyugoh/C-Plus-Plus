//
// Created by Joe Nyugoh on 01/10/2021.
//

#include <stack>
#include <queue>
#include "iostream"

using namespace std;

int main() {
    stack<int> s;
    s.push(4);
    s.push(5);
    s.push(-2);
    s.push(-3);
    s.push(11);
    s.push(10);
    s.push(5);
    s.push(6);
    s.push(20);
//    s.push(22);

    bool isConsecutive = true;
    queue<int> q;
    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }
    while(!q.empty()){
        s.push(q.front());
        q.pop();
    }

    while(!s.empty()) {
        int top = s.top();
        s.pop();
        if (s.empty()) {
            continue;
        }
        if (abs(top-s.top()) > 1) {
            isConsecutive = false;
        } else {
            s.pop();
        }
    }

    cout << isConsecutive;

    return 0;
}