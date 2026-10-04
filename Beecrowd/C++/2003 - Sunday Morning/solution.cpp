#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    string time;

    while (cin >> time)
    {
        int h = time[0] - '0';
        int m = (time[2] - '0') * 10 + (time[3] - '0');

        int total = h * 60 + m + 60;
        int delay = total - 8 * 60;

        if (delay < 0)
            delay = 0;

        cout << "Atraso maximo: " << delay << endl;
    }

    return 0;
}
