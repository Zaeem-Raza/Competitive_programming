// Codeforces
#include <bits/stdc++.h>
using namespace std;
double subsequences(vector<int> v)
{
    double max = *max_element(v.begin(), v.end());

    double sum = 0;
    bool f = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == max && f == 0)
        {
            f = 1;
            continue;
        }
        sum += v[i];
    }
    return ((double)sum / (v.size() - 1)) + max;
}
int main()
{
    vector<int> v1{3, 2, 1};
    vector<int> v2{-7, -6, -6};
    vector<int> v3{2, 2, 2};
    vector<int> v4{17, 3, 5, -3};
    cout << subsequences(v1) << endl;
    cout << subsequences(v2) << endl;
    cout << subsequences(v3) << endl;
    cout << subsequences(v4) << endl;
    return 0;
}
