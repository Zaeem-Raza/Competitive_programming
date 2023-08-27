// Leetcode
#include <bits/stdc++.h>
using namespace std;
int romanToInt(string s)
{
    int x = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'I')
        {
            if (s[i + 1] == 'V' || s[i + 1] == 'X')
            {
                x = x - 1;
                continue;
            }
            x = x + 1;
        }
        if (s[i] == 'V')
        {

            x = x + 5;
        }
        if (s[i] == 'X')
        {
            if (s[i + 1] == 'L' || s[i + 1] == 'C')
            {
                x = x - 10;
                continue;
            }
            x = x + 10;
        }
        if (s[i] == 'L')
        {

            x = x + 50;
        }
        if (s[i] == 'C')
        {
            if (s[i + 1] == 'D' || s[i + 1] == 'M')
            {
                x = x - 100;
                continue;
            }
            x = x + 100;
        }
        if (s[i] == 'D')
        {
            x = x + 500;
        }
        if (s[i] == 'M')
        {
            x = x + 1000;
        }
    }
    return x;
}
int main()
{

    cout << romanToInt("III") << endl;
    cout << romanToInt("LVIII") << endl;
    cout << romanToInt("MCMXCIV") << endl;
    return 0;
}