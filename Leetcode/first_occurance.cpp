// Leetcode
#include <bits/stdc++.h>
using namespace std;
int strStr(string haystack, string needle)
{
    return haystack.find(needle);
}
int main()
{
    cout << strStr("leetcode", "leeto");
    return 0;
}