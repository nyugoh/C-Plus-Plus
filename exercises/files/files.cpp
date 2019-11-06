/**
* Created by Joe Nyugoh Ngigi on 10/6/19 7:28 AM.
* Copyright (c) 2019 Que Base Tech. All rights reserved.
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string input;
    ofstream ofs("test.txt");
    ifstream ifs("test.txt");
    if (ofs.is_open()) {
        cout << "Writing to file" << endl;
        ofs << "Welcome to C++" << endl;
        ofs << "Hello world" << endl;
        ofs.close();
    } else {
        cout << "File doesn't exist." << endl;
    }

    if(ifs.is_open()){
        while(getline(ifs, input)){
            cout << input << endl;
        }
        ifs.close();
    } else {
        cout << "Can't open file" << endl;
    }
    return 0;
}