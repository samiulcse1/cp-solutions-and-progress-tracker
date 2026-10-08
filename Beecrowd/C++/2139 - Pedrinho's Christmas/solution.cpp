#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{

    int m, day;
    vector<int> vcc = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    while (cin >> m >> day)
    {
        int x = day;
        for (int i = 0; i < m; i++)
        {

            x += vcc[i];
        }

        if (x == 360)
            cout << "E natal!\n";
        else if (x == 359)
            cout << "E vespera de natal!\n";
        else if (x > 361)
            cout << "Ja passou!\n";
        else
            cout << "Faltam " << 360 - x << " dias para o natal!\n";
    }

    return 0;
}
