#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {

        int arr[n], max1 = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[n];
            max1 = max(max1, arr[n]);
        }
        if (max1 < 10)
        {
            cout << 1 << endl;
        }
        else if (max1 < 20)
        {
            cout << 2 << endl;
        }
        else
        {
            cout << 3 << endl;
        }
    }

    return 0;
}
