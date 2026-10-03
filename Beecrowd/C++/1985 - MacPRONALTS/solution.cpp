#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int n;
    cin >> n;
    long double sum = 0.0;
    while (n--)
    {
        long double a, b;
        cin >> a >> b;
        sum += (((a - 1000.0) + 0.50) * b);
    }
    cout << fixed << setprecision(2) << sum << endl;
    return 0;
}
