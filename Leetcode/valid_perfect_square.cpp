// Leetcode
#include <bits/stdc++.h>
using namespace std;
bool isPerfectSquare(int num)
{
    long int x = 1;
    while (x <= num)
    {
        if (x * x == num)
        {
            return true;
        }
        x++;
    }
    return false;
}
int main()
{
    cout << boolalpha << "16? " << isPerfectSquare(16) << endl;
    cout << "24? " << isPerfectSquare(24) << endl;
    return 0;
}