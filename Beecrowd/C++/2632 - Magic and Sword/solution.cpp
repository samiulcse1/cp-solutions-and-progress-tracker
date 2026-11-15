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
                else
                {
                    cout << 0 << endl;
                }
            }
            else if (l == 2)
            {
                if (dd1 < 30 || dd2 < 30 || dd3 < 30 || dd4 < 30)
                {
                    cout << 200 << endl;
                }
                else
                {
                    cout << 0 << endl;
                }
            }
            else if (l == 3)
            {
                if (dd1 < 50 || dd2 < 50 || dd3 < 50 || dd4 < 50)
                {
                    cout << 200 << endl;
                }
                else
                {
                    cout << 0 << endl;
                }
            }
        }
        else if (s == "water")
        {
            if (l == 1)
            {
                if (dd1 < 10 || dd2 < 10 || dd3 < 10 || dd4 < 10)
                {
                    cout << 300 << endl;
                }
                else
                {
                    cout << 0 << endl;
                }
            }
            else if (l == 2)
            {
                if (dd1 < 25 || dd2 < 25 || dd3 < 25 || dd4 < 25)
                {
                    cout << 300 << endl;
                }
                else
                {
                    cout << 0 << endl;
                }
            }
            else if (l == 3)
            {
                if (dd1 < 40 || dd2 < 40 || dd3 < 40 || dd4 < 40)
                {
                    cout << 300 << endl;
                }
                else
                {
                    cout << 0 << endl;
                }
            }
        }
        else if (s == "earth")
        {
            if (l == 1)
            {
                if (dd1 < 25 || dd2 < 25 || dd3 < 25 || dd4 < 25)
                {
                    cout << 400 << endl;
                }
                else
                {
                    cout << 0 << endl;
                }
            }
            else if (l == 2)
            {
                if (dd1 < 55 || dd2 < 55 || dd3 < 55 || dd4 < 55)
                {
                    cout << 400 << endl;
                }
                else
                {
                    cout << 0 << endl;
                }
            }
            else if (l == 3)
            {
                if (dd1 < 70 || dd2 < 70 || dd3 < 70 || dd4 < 70)
                {
                    cout << 400 << endl;
                }
                else
                {
                    cout << 0 << endl;
                }
            }
        }
        else if (s == "air")
        {
            if (l == 1)
            {
                if (dd1 < 18 || dd2 < 18 || dd3 < 18 || dd4 < 18)
                {
                    cout << 100 << endl;
                }
                else
                {
                    cout << 0 << endl;
                }
            }
            else if (l == 2)
            {
                if (dd1 < 38 || dd2 < 38 || dd3 < 38 || dd4 < 38)
                {
                    cout << 100 << endl;
                }
                else
                {
                    cout << 0 << endl;
                }
            }
            else if (l == 3)
            {
                if (dd1 < 60 || dd2 < 60 || dd3 < 60 || dd4 < 60)
                {
                    cout << 100 << endl;
                }
                else
                {
                    cout << 0 << endl;
                }
            }
        }
    }

    return 0;
}
