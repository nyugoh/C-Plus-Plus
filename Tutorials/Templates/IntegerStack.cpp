//
// Created by joe on 3/25/18.
//
#include <iostream>
using namespace std;

const int SIZE = 100;

template <class T>
class Stack
{
    T stack[SIZE];
    int top;
public:
    Stack(): top(-1)
    {}
    T pop()
    {
        return stack[top--];
    };
    void push(T value)
    {
        stack[++top] = value;
    };
};
//
//template <class T>
//T Stack::pop()
//{
//    return stack[top--];
//}
//
//template <class T>
//void Stack::push(T value)
//{
//    stack[++top] = value;
//}

int main()
{
    Stack<int> st1;
    st1.push(10);
    st1.push(10);
    st1.push(15);
    cout << st1.pop();
    return 0;
}
