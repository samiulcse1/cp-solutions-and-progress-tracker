#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{

    int t;
    cin >> t;
    // int cc=0;
    while (t--)
    {
        int x, y, w, h;
        cin >> x >> y >> w >> h;

        string s;
        int l, a, b;
        cin >> s >> l >> a >> b;
        int a1 = w, a2 = h, b1 = w + x, b2 = h;

        int c1 = w, c2 = h + y, d1 = w + x, d2 = h + y;

        double dd1 = sqrt((a - a1) * (a - a1) + (b - a2) * (b - a2));
        double dd2 = sqrt((a - b1) * (a - b1) + (b - b2) * (b - b2));
        double dd3 = sqrt((a - c1) * (a - c1) + (b - c2) * (b - c2));
        double dd4 = sqrt((a - d1) * (a - d1) + (b - d2) * (b - d2));

        if (s == "fire")
        {
            if (l == 1)
            {
                if (dd1 < 20 || dd2 < 20 || dd3 < 20 || dd4 < 20)
                {
                    cout << 200 << endl;
                }
            }
            else if (l == 2)
            {
                if (dd1 < 30 || dd2 < 30 || dd3 < 30 || dd4 < 30)
                {
                    cout << 200 << endl;
                }
            }
            else if (l == 3)
            {
                if (dd1 < 50 || dd2 < 50 || dd3 < 50 || dd4 < 50)
                {
                    cout << 200 << endl;
                }
            }
        }
        else if (s == "water")
        {
            if (l == 1)
            {
            }
            else if (l == 2)
            {
            }
            else if (l == 3)
            {
            }
        }
        else if (s == "earth")
        {
            if (l == 1)
            {
            }
            else if (l == 2)
            {
            }
            else if (l == 3)
            {
            }
        }
        else if (s == "air")
        {
            if (l == 1)
            {
            }
            else if (l == 2)
            {
            }
            else if (l == 3)
            {
            }
        }
    }

    return 0;
}
