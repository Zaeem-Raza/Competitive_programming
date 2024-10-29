// Leetcode
#include <bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int> &nums, int target)
{
    vector<int> vec;
    int f = 0;
    for (int i = 0; i < nums.size() && f == 0; i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[i] + nums[j] == target)
            {
                vec.push_back(i);
                vec.push_back(j);
                f = 1;
            }
        }
    }
    return vec;
}
int main()
{
    vector<int> v{2, 7, 11, 15};
    vector<int> ans = twoSum(v, 9);
    for (auto i : ans)
    {
        cout << i << " ";
    }
    return 0;
}