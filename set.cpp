#include <bits/stdc++.h>
using namespace std;

void printSet(set<int> s) {
    set<int>::iterator it;
    for (it = s.begin(); it != s.end(); ++it)
        cout << *it << " ";
    cout << "\n";
}

void eraseFromSet() {
    set<int> s;
    for (int i = 1; i <= 10; i++) {
        s.insert(i);
    }
    cout << "After insertion:\n";
    printSet(s);

    // Remove By Value TC- long(N)
    s.erase(10);
    cout << "After Removing 10 from set:\n";
    printSet(s);

    // Remove by position. TC - O(1);
    // Remove 2nd element from set
    s.erase(++s.begin());
    cout << "After Removing 2nd positioned elem from set:\n";
    printSet(s);

    // Remove all elem [s.begin,s.end)
    // TC- O(last-first);
    s.erase(s.begin(), s.end());
    cout << "After Removing all elem from set:\n";
    printSet(s);

    // Return of all above- No of elements removed
}

void removeAllFromSet() {
    set<int> s5;
    s5.insert(1);
    s5.insert(11);
    s5.insert(1);
    //Remove all elements from set. TC: O(N)
    // Returns none
    s5.clear();
    cout << s5.size() << endl;
}

void findElementFromSet() {
    set<int> s;
    for (int i = 10; i <= 15; i++) {
        s.insert(i + 1);
    }
    printSet(s);

    // if elem is found return iterator to element  else iterator to end
    // TC- log(N)
    cout << *(s.find(4)) << endl;  // random no
    cout << *(s.find(13)) << endl;

    // Return 1 or 0 based on existence
    // TC- log(N)
    cout << s.count(15) << endl;
}

int main() {
    // Elements are added in sorted order.
    // constructor
    set<int> s1 = {1, 2, 3};
    set<int> s2;
    set<int> s3(s2);
    set<int> s4(s1.begin(), s1.end());

    // inserting an element into set TC-log(N)
    // Return value - iterator to inserted or exising element
    s2.insert(1);

    // total elements in set TC- O(1)
    cout << s1.size() << endl;
    cout << s2.size() << endl;
    cout << s3.size() << endl;
    cout << s4.size() << endl;

    // set is empty or not  TC-O(1)
    cout << s2.empty() << endl;

    // remove all elements from set
    removeAllFromSet();

    // erasing elements
    eraseFromSet();

    // finding element from set
    findElementFromSet();
    return 0;
}