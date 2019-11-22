/**
* Created by Joe Nyugoh Ngigi on 11/8/19 9:59 PM.
* Copyright (c) 2019 Que Base Tech. All rights reserved.
*/

#include <iostream>
#include <string>

using namespace std;

/*
 * Implement an algorithm to determine if a string has all unique characters.
 * What if you cannot use additional data structures?
**/

bool isStringUnique(string word) {
    bool isUnique = true;
    char alpha[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's',
                      't', 'u', 'v', 'w', 'x', 'y', 'z'};
    int frequency[26] = {0};
    for (char letter : word)
        for (int i = 0; i < 26; i++)
            if (alpha[i] == letter) {
                frequency[i] += 1;
                // Check if count is greater than 1
                if (frequency[i] > 1) {
                    isUnique = false;
                    break; // No need to continue
                }
            }

    return isUnique;
}

bool isUnique(string word)
{
    if(word.length() > 128) return false;

    bool char_set[128] = {false};
    for(char c : word){
        if(char_set[c-'a'])
            return false;
        char_set[s-'a'] = true;
    }
    return true;
}

int main(int argvc, char *argv[]) {
    string name;
    cout << "Enter a string: ";
    getline(cin, name);

    if (isStringUnique(name)) {
        cout << name << " is unique." << endl;
    } else {
        cout << name << " is not unique." << endl;
    }
    return 0;
}