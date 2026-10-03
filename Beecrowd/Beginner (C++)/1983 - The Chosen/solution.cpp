#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int n;
    cin >> n;
    vector<pair<double, int>> pp(n);
    for (int i = 0; i < n; i++)
    {
        cin >> pp[i].second >> pp[i].first;
    }
    sort(pp.begin(), pp.end());
    (pp[n - 1].first) < 8.0 ? cout << "Minimum note not reached\n" : cout << pp[n - 1].second << endl;

    return 0;
}
