#include <bits/stdc++.h>
using namespace std;
int maxIncreaseKeepingSkyline(vector<vector<int>> &grid)
{
    // int maxi = 0;
    // vector<int> max_vector;
    // for (int i = 0; i < grid.size(); i++)
    // {
    //     for (int j = 0; j < grid.size(); j++)
    //     {
    //         if (maxi < grid[i][j])
    //         {
    //             maxi = grid[i][j];
    //         }
    //     }
    //     max_vector.push_back(maxi);
    //     maxi = 0;
    // }
    // for (auto it : max_vector)
    // {
    //     cout << it << endl;
    // }

    int n = grid.size();
    vector<pair<int, int>> v(n, {-1, -1});
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            v[i].first = max(v[i].first, grid[i][j]);
            v[i].second = max(v[j].second, grid[i][j]);
        }
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            ans = ans + min(v[i].first, v[j].second - grid[i][j]);
        }
    }
    return ans;
}
int main()
{
    vector<vector<int>> grid = {{3, 0, 8, 4}, {2, 4, 5, 7}, {9, 2, 6, 3}, {0, 3, 1, 0}};
    maxIncreaseKeepingSkyline(grid);
    return 0;
}
