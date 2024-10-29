// Leetcode
#include <bits/stdc++.h>
using namespace std;
string longestCommonPrefix(vector<string> &strs)
{
    sort(strs.begin(), strs.end());
    string ans = "";
    string f = strs[0];
    string l = strs[strs.size() - 1];
    int k = min(f.size(), l.size());
    for (int i = 0; i < k; i++)
    {
        if (f[i] != l[i])
        {
            return ans;
        }
        ans += f[i];
    }
    return ans;
}
int main()
{

    vector<string> v1{"flower", "flow", "flight"};
    vector<string> v2{"dog", "racecar", "car"};
    vector<string> v3{"a"};
    vector<string> v4{"", ""};
    cout << longestCommonPrefix(v1) << endl;
    cout << longestCommonPrefix(v2) << endl;
    cout << longestCommonPrefix(v3) << endl;
    cout << longestCommonPrefix(v4) << endl;
    return 0;
}