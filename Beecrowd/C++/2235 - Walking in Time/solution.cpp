#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (a == b || a == c || b == c ||
        a + b == c || a + c == b || b + c == a)
        cout << "S\n";
    else
        cout << "N\n";
    return 0;
}
