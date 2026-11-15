#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    string t;
    set<string> cc;
    while (cin >> t)
    {
        cc.insert(t);
    }
    cout << cc.size() << endl;

    return 0;
}
