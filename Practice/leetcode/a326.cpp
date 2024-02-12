#include <bits/stdc++.h>
using namespace std;
bool isPowerOfThree(int n)
{
    if (n == 0)
        return false;
    double t = log2(n) / log2(3);
    if (floor(t) == t)
    {
        return true;
    }
    return false;
}
int main()
{
    cout << isPowerOfThree(9);
    return 0;
}