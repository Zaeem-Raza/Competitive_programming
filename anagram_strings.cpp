#include <bits/stdc++.h>
using namespace std;
bool are_anagrams(string s1, string s2)
{
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    return s1 == s2;
}
vector<vector<string>> groupOfAnagrams(vector<string> strs)
{

    vector<vector<string>> ans;
    for (int i = 0; i < strs.size() - 1; i++)
    {
        bool f = 0;
        if (strs[i] == "_")
        {
            continue;
        }
        vector<string> st;
        for (int j = i + 1; j < strs.size(); j++)
        {

            if (are_anagrams(strs[i], strs[j]))
            {
                if (f == 0)
                {

                    st.push_back(strs[i]);
                }
                f = 1;
                st.push_back(strs[j]);
                strs[j] = "_";
            }
        }

        ans.push_back(st);
        if (f == 1)
        {
            strs[i] = "_";
        }
    }
    for (int i = 0; i < strs.size(); i++)
    {
        if (strs[i] != "_")
        {
            vector<string> st;
            st.push_back(strs[i]);
            ans.push_back(st);
        }
    }

    return ans;
}

int main()
{
    vector<string> v{"eat", "tea", "tan", "ate", "nat", "bat"};

    vector<vector<string>> ans = groupOfAnagrams(v);
    for (auto i : ans)
    {
        for (auto c : i)
        {
            cout << c << ",";
        }
        cout << "\n";
    }
    return 0;
}