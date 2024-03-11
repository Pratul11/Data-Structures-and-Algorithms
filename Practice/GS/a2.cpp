#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "";
    vector<pair<char, int>> ans;
    for (int i = 0; i < s.size(); i++)
    {
        ans[0].first = s[i];
        ans[0].second++;
    }
    return 0;
}