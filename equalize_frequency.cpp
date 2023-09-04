// Leetcode
#include <bits/stdc++.h>
using namespace std;
bool isEqual(int i, string s)
{
    s.erase(i, 1);
    map<char, int> myMap;
    for (int i = 0; i < s.size(); i++)
        myMap[s[i]]++;

    for (int i = 1; i < s.size(); i++)
        if (myMap[s[i]] != myMap[s[i - 1]])
        {
            return 0;
        }

    return 1;
}
bool equalFrequency(string word)
{
    for (int i = 0; i < word.size(); i++)
        if (isEqual(i, word))
        {
            return true;
        }
    return false;
}
int main()
{

    cout << equalFrequency("abcc") << endl;
    cout << equalFrequency("aazz") << endl;
    return 0;
}