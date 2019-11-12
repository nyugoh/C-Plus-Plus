/**
* Created by Joe Nyugoh Ngigi on 11/6/19 10:58 PM.
* Copyright (c) 2019 Que Base Tech. All rights reserved.
*/
#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>

using namespace std;

int main()
{
    char dict[][100] = {
        {"Abacus"},
        {"Abel"},
        {"aaa"},
        {"Apple"},
        {"AAA"},
    };

    char minWord[100] = "zzzzz";

    for (int i = 0; i < 5; ++i) {
        if(lexicographical_compare(dict[i], dict[i]+ strlen(dict[i]), minWord, minWord+strlen(minWord)))
            strcpy(minWord, dict[i]);
    }

    cout << "First word is :" ;
    for(int i=0; minWord[i] != '\0'; i++)
        cout << minWord[i] ;

    return 0;

}