#include <bits/stdc++.h>
using namespace std;
vector<int> buildArray(vector<int> &nums)
{
    vector<int> ans;
    for (int i = 0; i < nums.size(); i++)
    {
        int j = nums[nums[i]];

        ans.push_back(j);
    }
    for (auto i : ans)
    {
        cout << i << " ";
    }
    return ans;
}
int main()
{
    vector<int> v{0, 2, 1, 5, 3, 4};
    buildArray(v);
    return 0;
}