#include <bits/stdc++.h>
using namespace std;
void printVector(vector<int> v) {
    for (int i = 0; i < v.size(); i++) cout << v[i] << " ";
    cout << endl;
}

int main() {
    vector<int> v;  // empty vector
    cout << "V size is " << v.size() << endl;

    vector<int> v1(5);  // vector of size 5 with default values as 0
    cout << "V1 size is " << v1.size() << endl;
    printVector(v1);

    vector<int> v2(5, 4);  // vector of size 5 with values as 4
    printVector(v2);

    v.push_back(10);   // push at back
    v.push_back(102);  // push at back
    v.pop_back();      // remove from back
    printVector(v);    // 10

    v1.clear();  // clear all elements from vector
    cout << "V1 size is " << v1.size() << endl;

    v1 = v;  // assigning
    v.push_back(1000);
    printVector(v1);
    printVector(v);

    return 0;
}