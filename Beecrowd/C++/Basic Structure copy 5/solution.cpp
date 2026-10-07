#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{

    int m, day;
    while (cin >> m && cin >> day)
    {
        int x = (ceil((m - 1) * 30.5)) + day;

        if (x == 361)
        {

            cout << "E natal!\n";
        }
        else if (x == 360)
        {
            cout << "E vespera de natal!\n";
        }
        else if (x > 361)
        {
            cout << "Ja passou!\n";
        }
        else
        {
            cout << "Faltam " << 360 - x << " dias para o natal!\n";
        }
    }

    return 0;
}
