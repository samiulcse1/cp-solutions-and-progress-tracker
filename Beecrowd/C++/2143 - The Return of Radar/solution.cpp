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
            if (a % 2 == 1)
                cout << (a * 2) - 1 << endl;
            else
                cout << (a * 2) - 2 << endl;
        }
    }

    return 0;
}
