#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> pp(n);
    for (int i = 0; i < n; i++)
    {
        cin >> pp[i].second >> pp[i].first;
    }
    sort(pp.begin(), pp.end());
    (pp[n-1].first) 
    return 0;
}
