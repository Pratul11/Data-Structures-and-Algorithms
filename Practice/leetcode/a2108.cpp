#include <bits/stdc++.h>
using namespace std;
string firstPalindrome(vector<string> &words)
{
    string ans = "";
    for (int i = 0; i < words.size(); i++)
    {
        bool flag = true;
        int n = words[i].size();
        for (int j = 0; j < n / 2; j++)
        {
            if (words[i][j] != words[i][n - j - 1])
            {
                flag = false;
                break;
            }
        }
        if (flag == true)
        {
            ans = words[i];
            return ans;
        }
    }
    return ans;
}
int main()
{
    vector<string> words = {"notapalindrome", "racecar"};
    cout << firstPalindrome(words);
    // for (int i = 0; i < words.size(); i++)
    // {
    //     bool flag = true;
    //     int n = words[i].size();
    //     for (int j = 0; j < n / 2; j++)
    //     {
    //         if (words[i][j] != words[i][n - j - 1])
    //         {
    //             flag = false;
    //             break;
    //         }
    //     }
    //     if (flag == true)
    //     {
    //         cout << words[i];
    //     }
    // }
    return 0;
}