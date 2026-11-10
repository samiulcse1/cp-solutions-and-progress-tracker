
#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int n;

    while (cin >> n)
    {
        int cnt = 0, x;

        for (int i = 0; i < n; i++)
        {
            cin >> x;
            if (x == 1)
                cnt++;
        }

        if (3 * cnt >= 2 * n)
            cout << "impeachment" << endl;
        else
            cout << "acusacao arquivada" << endl;
    }

    return 0;
}
