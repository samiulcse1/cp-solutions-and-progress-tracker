#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int kk;
        cin >> kk;
        kk < 2015 ? cout << 2015 - kk << " D.C.\n" : cout << kk - 2014 << " A.C.\n";
    }
    return 0;
}
