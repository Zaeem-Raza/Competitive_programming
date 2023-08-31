// Leetcode
#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(int x)
{
    int rev = 0;
    int clone = x;
    if (x < 0)
    {
        return false;
    }
    while (clone != 0)
    {
        rev = rev * 10 + clone % 10;
        clone = clone / 10;
    }
    // cout << rev << endl;
    return x == rev;
}
int main()
{
    cout << isPalindrome(121) << endl;
    cout << isPalindrome(-121) << endl;
    cout << isPalindrome(10) << endl;
    cout << isPalindrome(-3543) << endl;
    cout << isPalindrome(12345) << endl;
    cout << isPalindrome(6556) << endl;
    return 0;
}