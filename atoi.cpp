#include <bits/stdc++.h>
using namespace std;
int myAtoi(string s)
{
    if (isalpha(s[0]) != 0)
    {
        return 0;
    }
    bool f = 0;
    long long int r = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '-')
            f = 1;
        if (s[i] >= '0' && s[i] <= '9')
            r = (r * 10) + (s[i] - 48);
    }
    if (f)
        return r * -1;
    return r;
}
int main()
{
    cout << atoi("-91283472332") << endl;
    cout << myAtoi("-91283472332") << endl;

    return 0;
}