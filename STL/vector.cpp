/**
* Created by Joe Nyugoh Ngigi on 10/6/19 9:01 AM.
* Copyright (c) 2019 Que Base Tech. All rights reserved.
*/

#include <iostream>
#include <vector>

using namespace std;

int main(int argvc, char *argv[])
{
    vector<int> ages = { 20, 45, 18, 32, 55, 56, 25};
    vector<int>::iterator it;

    for (int i = 0; i < ages.size(); ++i)
        cout << ages.at(i) << " ";
    cout << endl;

    for(int age : ages)
        cout << age << " ";
    cout << endl;

    for (it = ages.begin(); it != ages.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    cout << "New size is before push back " << ages.size() << endl;
    cout << "New capacity is before push back " << ages.capacity() << endl;

    ages.push_back(60);
    ages.push_back(13);
    ages.push_back(10);

    cout << "New size after push back is now " << ages.size() << endl;
    cout << "New capacity after push back is now " << ages.capacity() << endl;

    ages.pop_back();
    cout << "New size after pop back is now " << ages.size() << endl;

    cout << "Values of begin() is a pointer to the location of first element:: " << *ages.begin() << endl;
    cout << "Values of at begin :: " << ages.at(0) << endl;
    cout << "Values of at front :: " << ages.front() << endl;
    cout << "Values of at back :: " << ages.back() << endl;

    ages.shrink_to_fit();
    cout << "Sized and capacity after shrink to fit, Size :: " << ages.size()  << " capacity::" << ages.capacity() << endl;

    vector<int> v2;

    v2.assign(ages.begin(), ages.end());

    for(int i: v2)
        cout << i << " ";
    cout << endl;

    if(ages==v2)
        cout << "Ages equal to v2 " << endl;

    v2.swap(ages);

    // Takes iterator position to start and what to add
    v2.emplace(v2.begin()+2, 5);
    for(auto i : v2)
        cout << i << " ";
    cout << endl;

    v2.emplace_back(5);
    for(auto i : v2)
        cout << i << " ";
    cout << endl;

    // Takes iterator position to start and what to add
    v2.insert(v2.begin()+2, 5);
    v2.insert(v2.begin()+2, 3, 2); // insert 3, 2 times begining at index 1
    for(auto i : v2)
        cout << i << " ";
    cout << endl;

    cout << "value of rbegin() ::" << *v2.rbegin() << endl;
    cout << "value of rend() ::" << *(v2.rend()-1) << endl;
    cout << "value of end() ::" << *(v2.end()-1) << endl;
    cout << "value of begin() ::" << *v2.begin() << endl;

    v2.clear();
    cout << "Sized of v2 after clearing " << v2.size() << endl;

    return 0;
}