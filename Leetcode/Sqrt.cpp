// Leetcode
#include <bits/stdc++.h>
using namespace std;
int mySqrt(int x)
{
    long int n = 1;
    while (n * n < x)
    {
        n++;
    }
    if (n * n > x)
    {
        n--;
    }
    return n;
}
int main()
{
    cout << "Square Root 4 = " << mySqrt(4) << endl;
    cout << "Square Root 8 = " << mySqrt(8) << endl;
    return 0;
}