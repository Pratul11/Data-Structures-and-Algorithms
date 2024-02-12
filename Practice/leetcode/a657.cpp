#include <bits/stdc++.h>
using namespace std;
bool judgeCircle(string moves)
{
    int x = 0, y = 0;
    for (int i = 0; i < moves.size(); i++)
    {
        if (moves[i] == 'L')
        {
            x--;
        }
        else if (moves[i] == 'D')
        {
            y--;
        }
        else if (moves[i] == 'U')
        {
            y++;
        }
        else if (moves[i] == 'R')
        {
            x++;
        }
    }
    if (x == 0 && y == 0)
    {
        return true;
    }
    return false;
}
int main()
{
    string moves = "UU";
    cout << judgeCircle(moves);
    return 0;
}