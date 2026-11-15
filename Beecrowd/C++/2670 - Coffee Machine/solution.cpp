#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{

    int a, b, c;
    cin >> a >> b >> c;
    int x = b * 2 + c * 4;
    int y = a * 2 + c * 2;
    int z = a * 4 + b * 2;

    cout << min({x, y, z}) << endl;
    return 0;
}
