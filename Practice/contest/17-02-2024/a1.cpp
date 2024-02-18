#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a;
        int sum = 0;
        vector<int> arr;
        for (int i = 0; i < 2 * n; i++)
        {
            cin >> a;
            arr.push_back(a);
        }
        sort(arr.begin(), arr.end());
        for (int i = 0; i < 2 * n; i = i + 2)
        {
            sum = sum + min(arr[i], arr[i + 1]);
        }
        cout << sum << endl;
    }
    return 0;
}