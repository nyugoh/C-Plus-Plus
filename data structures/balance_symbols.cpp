/**
* Created by Joe Nyugoh Ngigi on 11/23/19 3:06 PM.
* Copyright (c) 2019 Que Base Tech. All rights reserved.
*/

#include <iostream>
#include "LinkedList.cpp"
#include <stack>

bool isBalanced(stack<char>, string);

using namespace std;

int main(int argvc, char *argv[]) {
    string expression = "{[(Kel:)]}";
    stack<char> list;
    if (isBalanced(list, expression)) {
        cout << "Expression is balanced" << endl;
    } else {
        cout << "Expression is not balanced" << endl;
    }
    return 0;
}

bool isBalanced(stack<char> list, string expression) {
    bool isBalanced = true;
    // Loop thru exp,
    // push opening symbols,
    // compare with the next on string
    for (int i = 0; i < expression.length(); i++) {
        char c = expression[i];
        if (c == '[' || c == '(' || c == '{') {
            list.push(c);
        }
        if (c == ']' || c == ')' || c == '}') {
           // cout << "Top :" << list.top() << " c: " << c << endl;
            if ((list.top() == '{' && c == '}') || (list.top() == '(' && c == ')') || (list.top() == '[' && c == ']')) {
                list.pop();
            } else {
                isBalanced = false;
                break;
            }
        }
    }
    return isBalanced;
}
