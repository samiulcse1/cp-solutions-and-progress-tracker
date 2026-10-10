#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{

    int n;
    cin >> n;

    double x = 2.0;
    for (int i = 0; i < n - 1; i++)
    {
        x = 2.0 + (1.0 / x);
    }
    if (n == 0)
    {
        cout << fixed << setprecision(10) << 1.0 << endl;
    }
    else
    {

        double ans = 1.0 + (1.0 / x);
        cout << fixed << setprecision(10) << ans << endl;
    }

    return 0;
}
