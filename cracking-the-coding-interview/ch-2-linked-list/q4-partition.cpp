/**
* Created by Joe Nyugoh Ngigi on 11/24/19 8:04 AM.
* Copyright (c) 2019 Que Base Tech. All rights reserved.
*/

#include <iostream>
#include "forward_list"

using namespace std;
/*
 * Partition: Write code to partition a linked list around a value x, such that all nodes less than x come
 * before all nodes greater than or equal to x. If x is contained within the list the values of x only need
 * to be after the elements less than x (see below). The partition element x can appear anywhere in the
 * "right partition"; it does not need to appear between the left and right partitions.
 * EXAMPLE
 *  Input: 3 -> 5 -> 8 -> 5 -> 10 -> 2 -> 1 [partition= 5]
 *  Output: 3 -> 1 -> 2 -> 10 -> 5 -> 5 -> 8
*/

/* Method 1
 * - create two list, one for less than values, the other for greater than values
 * - push each value accordingly,
 * - merge the two together, append to head of greater to tail of lesser
 * */
void method1(int);

/* Method 2
 * - Create a new list,
 * - if item is less, append to head
 * - if item is greater, append to end
 * */
void method2(int);

void print();
forward_list<int> list{100, 50, 30, 40, 110, 300, 40, 35, 20, 78, 92, 50};
int main(int argvc, char *argv[])
{
    print();
    method2(35);
    print();
    return 0;
}

void print()
{
    for(int & it : list)
        cout << it << " -> ";
    cout << endl;
}

void method1(int x)
{
    forward_list<int> lesser;
    forward_list<int> greater;
    for(int &value: list){
        if(value < x)
            lesser.push_front(value);
        else
            greater.push_front(value);
    }
    list.clear();
    for(int &it: lesser)
        list.push_front(it);
    for(int &it: greater)
        list.push_front(it);
}

void method2(int x)
{
    forward_list<int> list1;
    for(int &value: list)
        if(value < x){
            list1.push_front(value);
        } else{
            int length = 0;
            auto it = list1.begin();
            for(int &i: list1)length +=1;
            for(int j=1;j<length;j++)
                it++;
            list1.insert_after(it, value);
        }
}