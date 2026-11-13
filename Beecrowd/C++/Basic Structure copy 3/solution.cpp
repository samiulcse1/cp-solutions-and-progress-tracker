#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int t;
    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        string s;
        int r, g, b;
        cin >> s >> r >> g >> b;

        int p;

        if (s == "eye")
            p = (30 * r + 59 * g + 11 * b) / 100;
        else if (s == "mean")
            p = (r + g + b) / 3;
        else if (s == "max")
            p = max({r, g, b});
        else if (s == "min")
            p = min({r, g, b});

        cout << "Caso #" << i << ": " << p << endl;
    }

    return 0;
}
