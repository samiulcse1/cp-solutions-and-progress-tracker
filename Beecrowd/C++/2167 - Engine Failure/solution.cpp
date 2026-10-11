#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int n;
    cin >> n;
    vector<int> vcc(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vcc[i];
    }
    int ans = 0;
    for (int i = 1; i < n; i++)
    {
        if (vcc[i] < vcc[i - 1])
        {
            ans = i + 1;
            break;
        }
    }
    cout << ans << endl;
    return 0;
}
