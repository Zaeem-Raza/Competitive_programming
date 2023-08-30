// Leetcode
#include <bits/stdc++.h>
using namespace std;
vector<int> plusOne(vector<int> &digits)
{
    long long int nums = 0;
    for (int i = 0; i < digits.size(); i++)
    {
        nums = nums * 10 + digits[i];
    }
    nums++;
    cout << nums;
    digits.clear();
    while (nums != 0)
    {
        digits.push_back(nums % 10);
        nums = nums / 10;
    }
    reverse(digits.begin(), digits.end());
    return digits;
}
int main()
{
    vector<int> vec{9};
    plusOne(vec);
    cout << "\n";
    for (auto i : vec)
    {
        cout << i << " ";
    }
    cout << "\n";
    return 0;
}