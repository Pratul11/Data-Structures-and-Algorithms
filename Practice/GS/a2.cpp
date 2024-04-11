#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "wwwwaaadexxxxxx";
    int count[26] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] > 90)
        {
            s[i] -= 32;
        }
        count[s[i] - 65]++;
        for (int i = 0; i < 26; i++)
        {
            cout << count[i];
        }
        cout << endl;
    }
    for (int i = 0; i < s.size(); i++)
    {
        if (i == 0 || s[i] != s[i - 1])
        {
            cout << s[i];
            cout << count[s[i] - 65];
        }
    }
    return 0;
}