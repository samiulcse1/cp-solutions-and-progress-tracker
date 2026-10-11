#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int n;
    cin >> n;

    double root5 = sqrt(5.0);

    double phi = (1.0 + root5) / 2.0;
    double psi = (1.0 - root5) / 2.0;

    double fib = (pow(phi, n) - pow(psi, n)) / root5;

    cout << fixed << setprecision(1) << fib << endl;

    return 0;
}
