#include <bits/stdc++.h>
using namespace std;
void moveZeroes(vector<int> &nums)
{
    int c = 0;
    int s = nums.size();
    for (int i = 0; i < s; i++)
    {
        if (nums[i] == 0)
        {
            nums.erase(nums.begin() + i);
            c++;
        }
    }
    for (int i = 0; i < c; i++)
    {
        nums.push_back(0);
    }
    cout << "\n";
    for (auto i : nums)
    {
        cout << i << " ";
    }
    cout << "\n";
}
int main()
{
    vector<int> vec{0, 0};
    moveZeroes(vec);
    return 0;
}