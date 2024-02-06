#include <bits/stdc++.h>
using namespace std;
vector<vector<string>> groupAnagrams(vector<string> &strs)
{
    vector<pair<string, string>> sortedStrings;
    for (const string &str : strs)
    {
        string sortedStr = str;
        sort(sortedStr.begin(), sortedStr.end());
        sortedStrings.push_back({sortedStr, str});
    }
    sort(sortedStrings.begin(), sortedStrings.end());
    vector<vector<string>> ans;
    vector<string> temp;
    for (int i = 0; i < sortedStrings.size(); ++i)
    {
        if (i > 0 && sortedStrings[i].first != sortedStrings[i - 1].first)
        {
            ans.push_back(temp);
            temp.clear();
        }
        temp.push_back(sortedStrings[i].second);
    }
    if (!temp.empty())
    {
        ans.push_back(temp);
    }
    return ans;
}
int main()
{
    vector<string> arr = {"eat", "tea", "tan", "ate", "nat", "bat"};
    vector<vector<string>> ans = groupAnagrams(arr);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j];
        }
    }
    return 0;
}