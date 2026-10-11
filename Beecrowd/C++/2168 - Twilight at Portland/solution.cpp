#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{

    int n;
    cin >> n;

    int vcc[n + 1][n + 1];

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            cin >> vcc[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int s = vcc[i][j] + vcc[i][j + 1] +
                    vcc[i + 1][j] + vcc[i + 1][j + 1];

            cout << (s >= 2 ? 'S' : 'U');
        }
        cout << endl;
    }

    return 0;
}
