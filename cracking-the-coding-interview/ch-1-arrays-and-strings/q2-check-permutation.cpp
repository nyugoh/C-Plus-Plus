/**
* Created by Joe Nyugoh Ngigi on 11/8/19 11:52 PM.
* Copyright (c) 2019 Que Base Tech. All rights reserved.
*/

#include <iostream>
#include <string>
using namespace std;

/*
 * Given two strings, write a method to decide if one is a permutation of the other.
 * */
bool isPermutation(string s1, string s2)
{
    bool isPerm =  false;

    return isPerm;
}

int main(int argvc, char *argv[])
{
    string s1, s2;
    cout << "Enter first string :";
    getline(cin, s1);
    cout << "Enter second string :";
    getline(cin, s2);

    if(isPermutation(s1, s2))
    {
        cout << s2 << " is a permutation of " << s1 << endl;
    }
    else
    {
        cout << s2 << " is not a permutation of " << s1 << endl;
    }

    return 0;
}