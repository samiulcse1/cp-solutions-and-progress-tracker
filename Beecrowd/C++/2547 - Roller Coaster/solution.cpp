#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()

{

    int n, nn, nnn;

    while (cin >> n >> nn >> nnn)
    {
        int countt = 0;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            if (a >= nn & a <= nnn)
            {
                countt++;
            }
        }
        cout << countt << endl;
    }

    return 0;
}
