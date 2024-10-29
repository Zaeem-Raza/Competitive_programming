// Challenge
#include <bits/stdc++.h>
#include <set>
using namespace std;
bool duplicate(vector<int> vec)
{
    set<int> mySet(vec.begin(), vec.end());
    // return true if size of set is equal to vector
    return mySet.size() < vec.size();
}
int main()
{
    vector<int> v{1, 5, 0, 7, 2, 2};
    cout << duplicate(v);
    return 0;
}