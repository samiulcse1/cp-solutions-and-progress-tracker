#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int b, a1, d1, l1, a2, d2, l2;
        cin >> b >> a1 >> d1 >> l1 >> a2 >> d2 >> l2;

        double v1 = (a1 + d1) / 2.0 + (l1 % 2 == 0 ? b : 0);
        double v2 = (a2 + d2) / 2.0 + (l2 % 2 == 0 ? b : 0);

        if (v1 == v2)
            cout << "Empate\n";
        else if (v2 > v1)
            cout << "Guarte\n";
        else
            cout << "Dabriel\n";
    }

    return 0;
}
