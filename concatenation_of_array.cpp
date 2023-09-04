// Leetcode
#include <bits/stdc++.h>
using namespace std;
vector<int> getConcatenation(vector<int> &nums)
{
    int s = nums.size();
    for (int i = 0; i < s; i++)
    {
        nums.push_back(nums[i]);
    }
    for (auto i : nums)
    {
        cout << i << " ";
    }
    return nums;
}
int main()
{
    vector<int> vec{1, 2, 1};
    getConcatenation(vec);

    return 0;
}