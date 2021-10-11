//
// Created by Joe Nyugoh on 01/10/2021.
//

#include <stack>
#include "iostream"

using namespace std;

int main() {
    int stockPrices[5] = {6,3,4,5,2};
    int spans[5];
    int i, j;
    for(i=0;i<5;i++) {
       j = 1; // each stock spans itself
       while(j <=i && stockPrices[i]> stockPrices[i-j]) {
           j++;
       }
       spans[i] = j;
    }

    cout << "Stock prices::" << endl;
    cout << "\t";
    for (auto i : stockPrices) {
        cout << i << " ";
    }
    cout << endl;

    cout << "Stock spans::" << endl;
    cout << "\t";
    for (auto i : spans) {
        cout << i << " ";
    }
    cout << endl;

    int s2[5];
    stack<int> s;
    int p = -1;
    for(i=0;i<5;i++) {
        while(!s.empty() && stockPrices[i] > stockPrices[s.top()])
            s.pop();
        if (s.empty())
            p = -1;
        else
            p =s.top();
        s2[i] = i-p;
        s.push(i);
    }

    cout << "Stock spans using a stack::" << endl;
    cout << "\t";
    for (auto i : s2) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}