#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;

    while (cin >> n >> q)
    {
        vector<int> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr.rbegin(), arr.rend());

        for (int i = 0; i < q; i++)
        {
            int p;
            cin >> p;

            cout << arr[p - 1] << endl;
        }
    }

    return 0;
}