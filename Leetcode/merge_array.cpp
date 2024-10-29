// Challenge
#include <bits/stdc++.h>
using namespace std;
void merge(vector<int> &v1, int m, vector<int> &v2, int n)
{
    for (int i = 0; i < n; i++)
    {
        v1[m + i] = v2[i];
    }
    sort(v1.begin(), v1.end());
}
int main()
{
    vector<int> v1{1, 2, 3, 0, 0, 0};
    vector<int> v2{2, 5, 6};
    merge(v1, 3, v2, 3);
    cout << "\n";
    for (auto i : v1)
    {
        cout << i << " ";
    }
    return 0;
}