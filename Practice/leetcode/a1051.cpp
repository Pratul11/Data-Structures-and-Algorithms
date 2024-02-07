#include <bits/stdc++.h>
using namespace std;
int heightChecker(vector<int> &heights)
{
    vector<int> temp;
    for (int i = 0; i < heights.size(); i++)
    {
        temp.push_back(heights[i]);
    }
    sort(temp.begin(), temp.end());
    int count = 0;
    for (int i = 0; i < heights.size(); i++)
    {
        if (heights[i] != temp[i])
        {
            count++;
        }
    }
    return count;
}

int main()
{
    vector<int> h = {1, 1, 4, 2, 1, 3};
    cout << heightChecker(h);
    return 0;
}