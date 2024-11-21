#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int fun(vector<int> &vec, int goal)
{

    vec.insert(vec.begin(), 0);
    vec.push_back(goal);
    int diff = 0;
    int max = INT32_MIN;
    for (int i = 0; i < vec.size() - 1; i++)
    {
        diff = vec[i + 1] - vec[i];
        if (i == vec.size() - 2)
        {
            diff *= 2;
        }
        if (diff > max)
        {
            max = diff;
        }
    }
    return max;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int pump, goal;
        cin >> pump >> goal;
        vector<int> v(pump);

        for (int i = 0; i < pump; i++)
        {
            cin >> v[i];
        }

        int ans = fun(v, goal);
        cout << ans << endl;
    }

    return 0;
}
