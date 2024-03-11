#include <bits/stdc++.h>
using namespace std;
bool isRobotBounded(string instructions)
{
    int x = 0, y = 0, h = 0;
    for (int i = 0; i < instructions.size(); i++)
    {
        if (instructions[i] == 'L')
        {
            h = (h + 3) % 4;
        }
        else if (instructions[i] == 'R')
        {
            h = (h + 1) % 4;
        }
        else
        {
            if (h == 0)
            {
                y++;
            }
            else if (h == 1)
            {
                x++;
            }
            else if (h == 2)
            {
                y--;
            }
            else if (h == 3)
            {
                x--;
            }
        }
    }
    bool ans;
    if (x == 0 && y == 0 ? (ans = true) : (ans = false))
        ;
    return ans;
}

int main()
{
    cout << isRobotBounded("GG");
    return 0;
}

bool isRobotBounded(string instructions)
{
    int x = 0, y = 0, i = 0;
    vector<vector<int>> d = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
    for (char &ins : instructions)
        if (ins == 'R')
            i = (i + 1) % 4;
        else if (ins == 'L')
            i = (i + 3) % 4;
        else
            x += d[i][0], y += d[i][1];
    return x == 0 && y == 0 || i > 0;
}