// Codeforces
#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;
int main()
{
    vector<vector<int>> vec;
    int n;
    cin >> n;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int ones = 0;
        for (int j = 0; j < 3; j++)
        {
            int x;
            cin >> x;
            if (x == 1)
            {
                ones++;
            }
        }
        if (ones >= 2)
        {
            count++;
        }
    }
    cout << count;
    return 0;
}