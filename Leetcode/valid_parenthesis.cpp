// Leetcode
#include <bits/stdc++.h>
using namespace std;
bool isValid(string s)
{
    stack<char> q;
    int i = 0;
    while (s[i] != '\0')
    {
        char y = s[i];
        if (y == '{' || y == '[' || y == '(')
        {
            q.push(y);
        }
        else if (y == ']' || y == '}' || y == ')')
        {
            if (q.empty())
            {
                return false;
            }
            else
            {
                char z = q.top();
                q.pop();
                if ((y == ']' && z != '[') || (y == '}' && z != '{') || (y == ')' && z != '('))
                {
                    return false;
                }
            }
        }
        i++;
    }
    return q.empty();
}
int main()
{
    cout << isValid("{a+b-(c*d)}");
    return 0;
}