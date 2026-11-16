#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{

    int ca, ba, pa, cr, br, pr;

    cin >> ca >> ba >> pa >> cr >> br >> pr;

    int ans = 0;

    if (cr > ca)
        ans += cr - ca;
    if (br > ba)
        ans += br - ba;
    if (pr > pa)
        ans += pr - pa;

    cout << ans << endl;

    return 0;
}
