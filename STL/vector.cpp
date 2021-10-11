//
// Created by Joe Nyugoh on 30/09/2021.
//

#include <iostream>
#include <vector>
using namespace std;

/*
 * VECTORS
 * - Act as dynamic arrays
 * - Can hold any type
 * - Access is O(1)
 * - Insert is amortized to O(n) since it involves resizing the array
 * */

int main() {
    vector<int> v1;
    cout << "Size of v1::" << v1.size() << endl;
    cout << "Capacity of v1::" << v1.capacity() << endl;

    for(int i = 0; i < 10; i++) {
        v1.push_back(i);
    }

    cout << "Size::" << v1.size() << endl;
    cout << "Capacity::" << v1.capacity() << endl;

    for (int & i : v1) {
        cout << "Value of i::" << i << endl;
    }

    v1.pop_back();
    v1.pop_back();
    cout << "After v1.pop_back()" << endl;

    for (int & i : v1) {
        cout << "Value of i::" << i << endl;
    }

    cout << "Front::" << v1.front() << endl;
    cout << "Back::" << v1.back() << endl;

   return 0;
}
