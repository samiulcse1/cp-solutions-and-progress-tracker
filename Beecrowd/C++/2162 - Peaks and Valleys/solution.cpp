#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    int ans = 1;

    if (v[0] == v[1])
        ans = 0;

    for (int i = 1; i < n - 1; i++)
    {
        if ((v[i] > v[i - 1] && v[i] > v[i + 1]) ||
            (v[i] < v[i - 1] && v[i] < v[i + 1]))
            continue;

        ans = 0;
        break;
    }

    cout << ans << endl;
    return 0;
}
