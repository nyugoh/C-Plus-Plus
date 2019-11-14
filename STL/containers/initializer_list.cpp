/**
* Created by Joe Nyugoh Ngigi on 11/14/19 3:48 PM.
* Copyright (c) 2019 Que Base Tech. All rights reserved.
*/
#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>

using namespace std;

int main(int argvc, char *argv[])
{
    /*
     * You can use {} to initialize these stl containers
     * */

    /*
     * map ~ orders the keys, sorts them using comparable
     * unordered_map() ~ doesn't order keys, faster access
     * */
    vector<int> scores = {0, 1, 2, 3, 4,  5};
    map<string, int> nameMarks = { {"ddd", 90},{"zzz", 10}, {"aaa", 20}};

    cout << "Vector :" << endl;
    for(auto score: scores)
        cout << score<< " ";
    cout << endl;

    cout << "Map :" << endl;
    for(auto entry: nameMarks){

        cout << entry.first << " => " << entry.second << endl;
    }
    return 0;
}