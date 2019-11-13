/**
* Created by Joe Nyugoh Ngigi on 11/9/19 12:07 AM.
* Copyright (c) 2019 Que Base Tech. All rights reserved.
*/
#include <iostream>
#include <string>
#include <vector>
#include <cstring>

using namespace std;

/*
 Write a method to replace all spaces in a string with '%20'. You may assume that the string
has sufficient space at the end to hold the additional characters, and that you are given the "true"
length of the string. (Note: If implementing in Java, please use a character array so that you can
perform this operation in place.)
EXAMPLE
Input: "Mr John Smith" 13
Output: "Mr%20John%20Smith"
 * */
void urlifyString(string s1)
{
    vector<char> newString;
    for(char i : s1)
    {
        if(i == ' '){
            newString.push_back('%');
            newString.push_back('2');
            newString.push_back('0');
        } else {
            newString.push_back(i);
        }
    }
    for(auto i: newString)
        cout << i;
}

int main(int argvc, char *argv[])
{
    string s1 = "Mr John Smith";
    urlifyString(s1);
    return 0;
}