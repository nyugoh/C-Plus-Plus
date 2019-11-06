/**
* Created by Joe Nyugoh Ngigi on 11/6/19 11:39 PM.
* Copyright (c) 2019 Que Base Tech. All rights reserved.
*/
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string message = "The best will always win";

    cout << "The initial message is :" << message << endl;
    cout << "The length using .length() is :" << message.length() << endl;
    cout << "The length using .size() is :" << message.size() << endl;
    cout << "The length using .max_size() is :" << message.max_size() << endl;
    cout << "The length using .capacity() is :" << message.capacity() << endl;
    cout << "The char at index 5 of the string is : " << message.at(5)<< endl;
    cout << "Is the string empty? " << message.empty() << endl;
    cout << "Retrive the sub-string from index 4 for 4 characters :" << message.substr(4, 4) << endl;
}