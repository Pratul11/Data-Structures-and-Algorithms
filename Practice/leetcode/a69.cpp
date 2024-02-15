#include <bits/stdc++.h>
using namespace std;
int mySqrt(int x)
{
    int ans;
    if (x == 0 || x == 1)
    {
        return x;
    }
    for (int i = 1; i <= x / 2; i++)
    {
        int t = i * i;
        if (t > x)
        {
            ans = i;
            break;
        }
        if (t == x)
        {
            return t;
        }
    }
    return ans - 1;
}
int main()
{
    cout << mySqrt(10);
    return 0;
}