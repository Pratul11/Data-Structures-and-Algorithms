#include <bits/stdc++.h>
using namespace std;
string mergeAlternately(string word1, string word2)
{
    string result = "";
    int i = 0;
    while (i < word1.length() || i < word2.length())
    {
        if (i < word1.length())
        {
            result += word1[i];
        }
        if (i < word2.length())
        {
            result += word2[i];
        }
        i++;
    }
    return result;
}
int main()
{
    string w1 = "abcd";
    string w2 = "pqrs";
    string w;

    w = mergeAlternately(w1, w2);
    cout << w;
    return 0;
}