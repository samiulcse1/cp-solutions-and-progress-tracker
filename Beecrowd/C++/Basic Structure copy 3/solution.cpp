#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int st, t, f;
    cin >> st >> t >> f;

    int total = st * 60;
    total += t * 60;
    total += f * 60;

    if (total >= 24 * 60)
        total -= 24 * 60;

    if (total < 0)
        total += 24 * 60;

    cout << total / 60 << endl;

    return 0;
}
