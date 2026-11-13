#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{

    int n;
    while (cin >> n)
    {
        double c1, c2;
        cin >> c1 >> c2;
        cout << 1 << endl;
        double avg = c2 / c1;
        for (int i = 2; i <= n; i++)
        {
            double a, b;
            cin >> a >> b;
            if ((b / a) > avg)
            {
                cout << i << endl;
                avg = b / a;
            }
        }
    }

    return 0;
}
