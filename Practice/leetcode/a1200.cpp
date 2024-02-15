#include <bits/stdc++.h>
using namespace std;
void minimumAbsDifference(vector<int> &arr)
{
    sort(arr.begin(), arr.end());
    int minDiff = INT_MAX;
    for (int i = 1; i < arr.size(); i++)
    {
        int diff = abs(arr[i] - arr[i - 1]);
        if (diff < minDiff)
        {
            minDiff = diff;
        }
    }
    vector<vector<int>> ans;
    int j = 0;
    for (int i = 1; i < arr.size(); i++)
    {
        int diff1 = abs(arr[i] - arr[i - 1]);
        if (diff1 == minDiff)
        {
            ans[j].push_back(arr[i - 1]);
            ans[j].push_back(arr[i]);
            j++;
        }
    }
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j];
        }
    }
}
int main()
{
    vector<int> arr = {4, 2, 1, 3};
    minimumAbsDifference(arr);
    return 0;
}