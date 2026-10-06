#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    double v, d, pi = 3.14;
    while (cin >> v && cin >> d)
    {

        cout << fixed << setprecision(2) << "ALTURA = " << v / (pi * pow((d / 2.0), 2)) << endl
             << "AREA = " << pi * pow((d / 2.0), 2) << endl;
    }

    return 0;
}
