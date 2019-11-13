/**
* Created by Joe Nyugoh Ngigi on 11/13/19 4:49 PM.
* Copyright (c) 2019 Que Base Tech. All rights reserved.
*/

#include <iostream>

using namespace std;

const int MAX_SIZE = 5;
int count = 0;
int list[MAX_SIZE] = {};

void binaryString(int n) {
    if (n < 1) {
        cout << n << " ";
    } else {
        list[n - 1] = 0;
        binaryString(n - 1);
        list[n - 1] = 1;
        binaryString(n - 1);
    }
}


int main(int argvc, char *argv[]) {
    binaryString(MAX_SIZE);
    cout << "Count " << count << endl;
    return 0;
}

