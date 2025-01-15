// C++ program to illustrate the use of std::upper_bound
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30, 40, 50};

    // Finding upper bound for value 30 in vector v
    cout << *upper_bound(v.begin(), v.end(), 35);

    return 0;
}