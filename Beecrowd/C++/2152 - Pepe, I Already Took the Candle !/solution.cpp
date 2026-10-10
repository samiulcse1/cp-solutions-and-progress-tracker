#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        (a > 9) ? cout << a << ":" : cout << 0 << a << ":";
        (b > 9) ? cout << b : cout << 0 << b;
        (c == 1) ? cout << " - A porta abriu!\n" : cout << " - A porta fechou!\n";
    }

    return 0;
}
