#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    string s;
    cin >> s;

    int cc = count(s.begin(), s.end(), '1');
    cout << s << (cc % 2) << endl;

    return 0;
}
