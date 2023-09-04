// Leetcode Medium
#include <bits/stdc++.h>
using namespace std;
int reverse(int x)
{
    int r = 0;
    while (x)
    {
        if (r > INT_MAX / 10 || r < INT_MIN / 10)
            return 0;
        r = r * 10 + x % 10;
        x = x / 10;
    }
    return r;
}
int main()
{
    cout << reverse(123) << endl;
    cout << reverse(-121) << endl;
    cout << reverse(120) << endl;
    return 0;
}