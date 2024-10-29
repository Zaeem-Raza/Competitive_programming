#include <bits/stdc++.h>
using namespace std;
int lengthOfLastWord(string s)
{
    int count = 0;
    bool flag = 0;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (s[i] == ' ' && flag)
        {
            break;
        }
        if (s[i] != ' ')
        {
            flag = true;
            count++;
        }
    }
    return count;
}
int main()
{
    cout << lengthOfLastWord("a ") << endl;
    cout << lengthOfLastWord("a") << endl;
    cout << lengthOfLastWord("Hello World") << endl;
    cout << lengthOfLastWord("   fly me   to   the moon  ") << endl;
    cout << lengthOfLastWord("luffy is still joyboy") << endl;
    return 0;
}