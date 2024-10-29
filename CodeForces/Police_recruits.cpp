// Codeforces
#include <bits/stdc++.h>
using namespace std;
int crimes(vector<int> vec)
{
    int no_crimes = 0;
    int count = 0;
    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i] == -1)
        {
            if (count == 0)
            {
                no_crimes++;
            }
            else
            {
                count--;
            }
        }
        else
        {
            count += vec[i];
        }
    }
    return no_crimes;
}
int main()
{
    int t;
    cin >> t;
    vector<int> v;
    while (t--)
    {
        int s;
        cin >> s;
        v.push_back(s);
    }
    cout << crimes(v);
    return 0;
}