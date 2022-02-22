#include <bits/stdc++.h>
using namespace std;
void printIntMap(map<int, int> &m) {
    map<int, int>::iterator it;
    for (it = m.begin(); it != m.end(); it++) {
        cout << it->first << " " << it->second << "\n";
    }
    cout << endl;
}

int main() {
    map<int, int> m1;
    // keys are stored in sorted order
    m1[1] = 1;
    m1[3] = 99;
    m1[2] = 4;
    m1[3] = 9;
    printIntMap(m1);
    map<int, int> m2(m1.begin(), m1.end());
    map<int, int> m3;

    // Assignment
    map<int, int> m4 = m2;
    printIntMap(m4);

    // Size of map TC- O(1)
    cout << "Total items in map are  " << m1.size() << "\n";

    // Check if map is empty TC- O(1)
    cout << "Map is " << (m3.empty() ? "" : "not") << "empty\n";

    // Accessing map TC- O(log(N))
    cout << m1[3] << "\n";

    // TC - log(N)
    m2.insert({4, 16});
    pair<map<int, int>::iterator, bool> ret;
    ret = m2.insert({4, 16});
    if (!ret.second) {
        cout << "Already exist\n";
    }
    printIntMap(m2);

    // Erase and insert (Same as SET)
    return 0;
}