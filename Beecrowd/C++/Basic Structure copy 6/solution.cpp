#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int n;
    cin >> n;

    double x = 6.0, ans = 0;

    for (int i = 0; i < n; i++)
        x = 6.0 + (1.0 / x);

    if (n == 0)
        ans = 3.0;
    else
        ans = 3.0 + 1.0 / x;

    cout << fixed << setprecision(10) << ans << endl;

    return 0;
}
