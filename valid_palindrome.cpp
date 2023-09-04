#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(string s)
{
    stack<char> st;
    int i = 0;
    while (s[i])
    {
        char y = tolower(s[i]);
        if ((y >= 97 && y <= 122) || (y >= '0' && y <= '9'))
        {
            st.push(y);
        }
        i++;
    }

    i = 0;
    while (s[i])
    {
        char y = tolower(s[i]);
        if ((y >= 97 && y <= 122) || (y >= '0' && y <= '9'))
        {
            char z = st.top();
            st.pop();
            if (y != z)
            {
                return false;
            }
        }
        i++;
    }
    return true;
}
int main()
{
    cout << boolalpha << isPalindrome("A man, a plan, a canal: Panama") << endl;
    cout << boolalpha << isPalindrome("race a car") << endl;
    cout << boolalpha << isPalindrome(" ") << endl;
    return 0;
}