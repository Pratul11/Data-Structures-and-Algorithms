#include <bits/stdc++.h>
using namespace std;
void smallerNumbersThanCurrent(vector<int> &nums)
{
    int count = 0;
    vector<int> ans;
    for (int i = 0; i < nums.size(); i++)
    {
        count = 0;
        for (int j = 0; j < nums.size(); j++)
        {
            if (nums[i] > nums[j])
            {
                count++;
            }
        }
        ans.push_back(count);
    }
    for (auto it : ans)
    {
        cout << it << " ";
    }
}
int main()
{
    vector<int> nums = {6, 5, 4, 8};
    vector<int> ans;
    smallerNumbersThanCurrent(nums);
    return 0;
}