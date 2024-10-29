// Leetcode
#include <bits/stdc++.h>
using namespace std;

string convert(string s, int numRows)
{
    if (numRows <= 1 || s.size() < numRows)
        return s;
    bool f = false;
    int curr = 0;
    vector<string> strs(numRows);
    for (int i = 0; i < s.size(); i++)
    {
        strs[curr] += s[i];
        if (curr == numRows - 1 || curr == 0)
        {
            f = !f;
        }
        if (f)
        {
            curr++;
        }
        else
        {
            curr--;
        }
    }
    string result = "";
    for (std::string &i : strs)
    {
        result += i;
    }
    return result;
}

int main()
{
    // string str = "Paypal\nis\nHiring";
    // cout << str;
    // cout << convert("BITMANIPULATIONPROBLEMS", 4) << endl;
    string s1 = convert("ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZ", 20);
    // cout << convert("PAYPALISHIRING", 3) << endl;
    string s = "AMYBLNXZCKOWADJPVBEIQUCFHRTDGGSSEHFTRFIEUQGJDVPHKCWOILBXNJZMAYMKYNZZLLXOYAKMWPXBJNVQWCIOURVDHPTSUEGQSTFR";
    cout << (s1 == s);
    return 0;
}
