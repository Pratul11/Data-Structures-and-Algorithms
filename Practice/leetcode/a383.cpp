#include <bits/stdc++.h>
using namespace std;
bool canConstruct(string a, string b)
{
    map<char, int> mp;
    for (int i = 0; i < b.size(); i++)
    {
        mp[b[i]]++;
    }
    for (int i = 0; i < a.size(); i++)
    {
        if (mp[a[i]] > 0)
        {
            mp[a[i]]--;
        }
        else
        {
            return false;
        }
    }
    return true;
}
int main()
{
    string ransomNote = "aa", magazine = "aab";
    cout << canConstruct(ransomNote, magazine);
    return 0;
}