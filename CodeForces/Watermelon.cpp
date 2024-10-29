// Watermelon problem from codeforces
#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    if (x > 2 && x % 2 == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}