#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int w, h, x, y;
        cin >> w >> h >> x >> y;
        string s;
        int l, a, b;
        cin >> s >> l >> a >> b;

        int dx = 0;
        if (a < x)
            dx = x - a;
        else if (a > x + w)
            dx = a - (x + w);

        int dy = 0;
        if (b < y)
            dy = y - b;
        else if (b > y + h)
            dy = b - (y + h);

        double dd = sqrt(dx * dx + dy * dy);

        if (s == "fire")
        {
            if (l == 1)
            {
                if (dd <= 20)
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
                if (dd <= 30)
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
                if (dd <= 50)
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
                if (dd <= 10)
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
                if (dd <= 25)
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
                if (dd <= 40)
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
                if (dd <= 25)
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
                if (dd <= 55)
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
                if (dd <= 70)
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
                if (dd <= 18)
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
                if (dd <= 38)
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
                if (dd <= 60)
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
