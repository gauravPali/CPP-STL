#include <bits/stdc++.h>
using namespace std;
void printPair(pair<int, int> p) {
    cout << p.first << " " << p.second << "\n";
}

void swapPairs() {
    cout << "--Swap of  pairs--";
    pair<int, int> p1 = {2, 4};
    pair<int, int> p2 = {3, 9};
    p1.swap(p2);
    cout << "P1: ";
    printPair(p1);
    cout << "P2: ";
    printPair(p2);
}

bool sortBySecondElem(const pair<int, int> &a, const pair<int, int> &b) {
    return a.second < b.second;
}

bool sortBySecondElemDesc(const pair<int, int> &a, const pair<int, int> &b) {
    return a.second > b.second;
}

bool sortByFirstDesc(const pair<int, int> &a, const pair<int, int> &b) {
    return a.first > b.first;
}

void sortingPairs() {
    cout << "--Sorting of Array of pairs--\n";
    pair<int, int> p[5] = {{2, 4}, {5, 5}, {3, 4}, {3, 2}, {2, 2}};
    pair<int, int> p1[5] = {{2, 4}, {5, 5}, {3, 2}, {3, 4}, {2, 2}};
    sort(p, p + 5);  // sorting by ascending and and asc applied to second elem in case of fist elem are equal.
    cout << "Sorting of array of pairs by first elem in Ascendng order\n";
    for (int i = 0; i < 5; i++) printPair(p[i]);

    cout << "Sorting of array of pairs by first elem in Descending order\n";
    sort(p1, p1 + 5, sortByFirstDesc);  // sorting by desc. with maintaining order of second elem  in case of fist elem are equal.
    for (int i = 0; i < 5; i++) printPair(p1[i]);

    // sorting by second elem of pair
    pair<int, int> p2[5] = {{32, 44}, {5, 15}, {3, 4}, {223, 22}, {2, 22}};
    cout << "Sorting of array of pairs by second elem in Ascendng order\n";
    sort(p2, p2 + 5, sortBySecondElem);
    for (int i = 0; i < 5; i++) printPair(p2[i]);

    cout << "Sorting of array of pairs by second elem in Descending order\n";
    pair<int, int> p3[5] = {{32, 44}, {5, 15}, {3, 4}, {2, 22}, {223, 22}};
    sort(p3, p3 + 5, sortBySecondElemDesc);
    for (int i = 0; i < 5; i++) printPair(p3[i]);
}

int main() {
    // pair constructors
    pair<int, int> p0;  // 0,0
    pair<int, int> p1(2, 4);
    pair<int, int> p2(p1);
    cout << "P0: ";
    printPair(p0);  // (0,0)
    p1.first = 5;
    cout << "P1: ";
    printPair(p1);  // (5,4)
    cout << "P2: ";
    printPair(p2);  // (2,4)

    p0 = make_pair(20, 400);
    pair<int, int> p3 = p0;
    printPair(p3);

    // swap pairs
    swapPairs();

    // sorting an array of pairs
    sortingPairs();

    return 0;
}