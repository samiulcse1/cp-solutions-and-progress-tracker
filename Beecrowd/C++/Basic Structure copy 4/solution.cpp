#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{

    int m, day;
    vector<int> vcc = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    while (cin >> m >> day)
    {
        for (int i = 0; i < m; i++)
        {
            int x = ceil((m - 1) * 30.5) + day;
            /* code */
        }
        

        if (x == 361)
            cout << "E natal!\n";
        else if (x == 360)
            cout << "E vespera de natal!\n";
        else if (x > 361)
            cout << "Ja passou!\n";
        else
            cout << "Faltam " << 360 - x << " dias para o natal!\n";
    }

    return 0;
}
