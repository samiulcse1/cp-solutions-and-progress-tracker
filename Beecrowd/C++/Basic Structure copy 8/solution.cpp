#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{

    double n;
    cin >> n;

    double ppp = (n / log(n)) * 0.92129;
    double nn = 1.25506 * n / log(n);
    

    cout << fixed << setprecision(1) << ppp << " " << nn << endl;

    return 0;
}
