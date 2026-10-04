#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    string time;
    while (cin >> time)
    {
        int a, b;
        a = (int)time[2] - '0';
        b = (int)time[3] - '0';
        cout << "Atraso maximo: " << ((a * 10) + (b * 1)) << endl;
    }

    return 0;
}
