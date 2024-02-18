#include <bits/stdc++.h>
using namespace std;
int maxOperations(vector<int> &nums)
{
    int sum = 0;
    int opr = 0;
    sum = nums[0] + nums[1];
    opr++;
    nums.erase(nums.begin(), nums.begin() + 2);
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[0] + nums[1] == sum)
        {
            nums.erase(nums.begin(), nums.begin() + 2);
            opr++;
            cout << "opr = " << opr << endl;
            for (auto it : nums)
            {
                cout << it << " ";
            }
            cout << endl;
        }
        else
        {
            cout << "why";
            return opr;
        }
    }
    return opr;
}
int main()
{
    vector<int> a = {3, 2, 3, 2, 2, 3, 3, 2, 4, 1};
    // a.erase(a.begin(), a.begin() + 2);
    cout << maxOperations(a);
    return 0;
}