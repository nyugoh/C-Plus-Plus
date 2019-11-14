/**
* Created by Joe Nyugoh Ngigi on 11/14/19 8:00 AM.
* Copyright (c) 2019 Que Base Tech. All rights reserved.
*/

#include <iostream>
#include <map>
#include <vector>

using namespace std;

int sockMerchant(vector<int> socks)
{
    map<int, int> freqTable;
    map<int, int>::iterator it;
    int i = 0, totalPairs = 0;
   for(auto sock : socks){
       it = freqTable.find(sock);
       if(it == freqTable.end()){
           // make new insert
           freqTable.insert({sock, 1});
       } else {
           // increment count
           it->second += 1;
       }

   }
   for(auto freq: freqTable){
//       cout << endl << freq.first << " => " << freq.second << endl;
       totalPairs += freq.second/2;
   }
    return  totalPairs;
}

int countingValleys(int n, string steps) {
    int valleys = 0, mountains = 0, att = 0, direction = 0;
    for(char step: steps){
        if(step == 'U'){
            if(att == 0)
                direction = 1;
            att += 1;
        }
        if(step == 'D'){
            if(att == 0)
                direction = -1;
            att -= 1;
        }
        if(att == 0 ){
            if(direction == 1)
                mountains += 1;
            if(direction == -1)
                valleys += 1;
        }
        cout << "Step : " << step<< " Att : " << att << endl;
    }

    return valleys;
}

int main(int argvc, char *argv[])
{
    vector<int> socks = {10, 20, 20, 10, 10, 30, 50, 10, 20};
    cout << "Possible pairs :" << sockMerchant(socks) << endl;

    string steps = "UDDDUDUU";
    cout << "Valleys :" << countingValleys(steps.length(), steps) << endl;

    return 0;
}