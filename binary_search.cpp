// Leetcode
#include <bits/stdc++.h>
using namespace std;
int search(vector<int> &nums, int target)
{
    int l = 0;
    int h = nums.size() - 1;
    while (l <= h)
    {
        int mid = l + (h - l) / 2;
        if (nums[mid] == target)
        {
            return mid;
        }
        else if (nums[mid] > target)
        {
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return -1;
}
int main()
{
    vector<int> vec{-1, 0, 3, 5, 9, 12};
    cout << search(vec, 2);
    return 0;
}