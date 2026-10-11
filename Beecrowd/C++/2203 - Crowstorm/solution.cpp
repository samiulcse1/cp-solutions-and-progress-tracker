#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{

    int xf, yf, xi, yi, vi, r1, r2;

    while (cin >> xf >> yf >> xi >> yi >> vi >> r1 >> r2)
    {
        double d = sqrt((xf - xi) * (xf - xi) + (yf - yi) * (yf - yi));

        cout << (d + 1.5 * vi <= r1 + r2 ? 'Y' : 'N') << endl;
    }

    return 0;
}
