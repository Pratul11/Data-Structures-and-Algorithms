#include <bits/stdc++.h>
using namespace std;
int findNumbers(vector<int> &nums)
{
    int count = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] >= 10 && nums[i] <= 99)
        {
            count++;
        }
        if (nums[i] >= 1000 && nums[i] <= 9999)
        {
            count++;
        }
        if (nums[i] == 100000)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    vector<int> nums = {555, 901, 482, 1771};
    cout << findNumbers(nums);
    return 0;
}