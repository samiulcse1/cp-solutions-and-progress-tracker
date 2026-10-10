#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int n;
    while (cin >> n && n != 0)
    {

        int a;
        while (n--)
        {
            cin >> a;
            cout << (a * 2) - 1 << endl;
        }
    }

    return 0;
}
