#include <bits/stdc++.h>
using namespace std;
int singleNumber(vector<int> &nums)
{
    unordered_map<int, int> freq;
    for (auto i : nums)
    {
        freq[i]++;
    }
    for (auto j : freq)
    {
        if (j.second == 1)
        {
            return j.first;
        }
    }
    return -1;
}
int main()
{
    vector<int> vec{1, 2, 2, 3, 4, 4, 3, 5, 6, 5, 6, 2};
    cout << singleNumber(vec);
    return 0;
}