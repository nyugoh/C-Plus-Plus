/**
* Created by Joe Nyugoh Ngigi on 11/24/19 9:10 AM.
* Copyright (c) 2019 Que Base Tech. All rights reserved.
*/
#include <iostream>
#include <forward_list>
#include <stack>
#include <cmath>
#include <queue>

using namespace std;

/*
 * Sum Lists: You have two numbers represented by a linked list, where each node contains a single
 * digit. The digits are stored in reverse order, such that the 1 's digit is at the head of the list. Write a
 * function that adds the two numbers and returns the sum as a linked list.
 * EXAMPLE
 *  Input: (7-> 1 -> 6) + (5 -> 9 -> 2).That is,617 + 295.
 *  Output: 2 -> 1 -> 9. That is, 912.
 * FOLLOW UP
 *  Suppose the digits are stored in forward order. Repeat the above problem.
 *  Input: (6 -> 1 -> 7) + (2 -> 9 -> 5).That is,617 + 295.
 *  Output: 9 -> 1 -> 2. That is, 912.
 */

/* SOLUTION
 * - Push them each in a stack, get the length
 * - Pop each item and mupliply with 10^index, add them up for each stack
 * - Sum the product of both
 * */

forward_list<int> sumListForward(forward_list<int>, forward_list<int>);
forward_list<int> sumListBackward(forward_list<int>, forward_list<int>);

int main(int argvc, char *argv[])
{
    forward_list<int> l1{6,1,7};
    forward_list<int> l2{2,9,5};
    sumListBackward(l1, l2);

    l1 = {7,1, 6};
    l2 = {5,9,2};
    sumListForward(l1, l2);
    return 0;
}

forward_list<int> sumListForward(forward_list<int> l1, forward_list<int> l2) {
    forward_list<int> sum;
    stack<int> s1, s2;
    int l1Value=0, l2Value=0, s1Length = 0, s2Length = 0;
    for(int &i: l1){
        cout << i << " ->";
        s1.push(i);
        s1Length += 1;
    }
    for(int &j:l2){
        cout << j << " ->";
        s2.push(j);
        s2Length += 1;
    }

    for(int i=0;i< s1Length;i++){
        l1Value += s1.top()*pow(10, i);
        s1.pop();
    }
    for(int i=0;i< s2Length;i++){
        l2Value += s2.top()*pow(10, i);
        s2.pop();
    }
    cout << l1Value << " + " << l2Value<< " = " << l1Value+ l2Value << endl;
    return sum;
}


forward_list<int> sumListBackward(forward_list<int> l1, forward_list<int> l2) {
    forward_list<int> sum;
    queue<int>q1, q2;
    int l1Value=0, l2Value=0,q1Length = 0, q2Length = 0;
    for(int &i: l1){
        cout << i << " ->";q1.push(i);q1Length += 1;
    }
    for(int &j:l2){
        cout << j << " ->";
        q2.push(j);
        q2Length += 1;
    }

    for(int i=q1Length;i>0;i++){
        l1Value +=q1.front()*pow(10, i);q1.pop();
    }
    for(int i=q2Length;i>0;i++){
        l2Value += q2.front()*pow(10, i);
        q2.pop();
    }
    cout << l1Value << " + " << l2Value<< " = " << l1Value+ l2Value << endl;
    return sum;
}
