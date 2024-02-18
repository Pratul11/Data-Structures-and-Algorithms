#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> permutation(n);
        for (int i = 0; i < n; i++)
        {
            permutation[i] = i + 1;
        }
        for (int i = n - 1; i >= 0; i--)
        {
            cout << permutation[i] << " ";
        }

        cout << endl;
    }

    return 0;
}
