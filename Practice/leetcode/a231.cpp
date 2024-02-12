#include <bits/stdc++.h>
using namespace std;
bool isPowerOfTwo(int n)
{
    if (n == 0)
    {
        return false;
    }
    double t = log2(n);
    if (floor(t) == t)
    {
        return true;
    }
    return false;
}
int main()
{
    cout << isPowerOfTwo(9);
    return 0;
}