// Leetcode
#include <bits/stdc++.h>
using namespace std;
int removeElement(vector<int> &nums, int val)
{
    nums.erase(remove(nums.begin(), nums.end(), val), nums.end());
    cout << "\n";
    return nums.size();
}
int main()
{
    vector<int> v{3, 2, 2, 3};
    cout << removeElement(v, 3);

    return 0;
}