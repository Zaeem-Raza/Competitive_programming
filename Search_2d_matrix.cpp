// Leetcode
#include <bits/stdc++.h>
using namespace std;
bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    for (auto i : matrix)
    {
        for (auto j : i)
        {
            if (j == target)
            {
                return true;
            }
        }
    }
    return false;
}
int main()
{
    vector<vector<int>> mat{{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
    cout << searchMatrix(mat, 13);
    return 0;
}
