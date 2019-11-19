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

vector<int> gradingStudents(vector<int> grades) {
    vector<int> _grades;
    int lastDigit = 0, diff = 0, tempGrade=0;
    for(auto grade: grades){
        tempGrade = grade;
        if(tempGrade >= 38){
            lastDigit = tempGrade%10;
            diff = (5 * (lastDigit/5) + 5) - lastDigit;
            if(diff < 3){
                tempGrade += diff;
            }
        }
        _grades.push_back(tempGrade);
    }
    return _grades;
}

// Complete the repeatedString function below.
long repeatedString(string s, long n) {
    long size = s.length();
    long whole = 0, remainder = 0, unit =0;
    long times = 0;
    for(auto c:s )
        if(c=='a') unit +=1;
    whole = n/size;
    remainder = n % size;
    times = unit*whole;
    if(remainder > 0){
        s = s.substr(0, remainder);
        for(auto a: s)
            if(a == 'a')
                times += 1;
    }
    return times;
}

int jumpingOnClouds(vector<int> c) {
    int jumps = 0;
    for(int i=0; i<c.size()-1;){
        if(c[i+1] == 1){
            i += 2;
            jumps += 1;
        } else if(c[i+1] == 0){
            if(c[i+2] == 0)
                i += 2;
            else
                i+=1;
            jumps +=1;
        }
    }
    return jumps;
}


int main(int argvc, char *argv[])
{
//    vector<int> socks = {10, 20, 20, 10, 10, 30, 50, 10, 20};
//    cout << "Possible pairs :" << sockMerchant(socks) << endl;

    vector<int> marks{73, 67,38,33};
    vector<int> grades = gradingStudents(marks);
    for(auto i: grades)
        cout << i << endl;
//    string steps = "UDDDUDUU";
//    cout << "Valleys :" << countingValleys(steps.length(), steps) << endl;

    cout << "Times :" << repeatedString("aba", 10) << endl;
    vector<int> c{0,0,1,0,0,1,0};
    cout << "Min jumps" << jumpingOnClouds(c) << endl;

    return 0;
}