// Leetcode
#include <bits/stdc++.h>
using namespace std;
int removeDuplicates(vector<int> &nums)
{
    set<int> mySet(nums.begin(), nums.end());
    int s = mySet.size();
    vector<int> newV(mySet.begin(), mySet.end());
    nums = newV;
    return s;
}
int main()
{

    vector<int> v{0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    int r = removeDuplicates(v);
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << "\nNum: " << r;
    return 0;
}