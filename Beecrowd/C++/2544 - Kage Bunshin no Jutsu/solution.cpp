#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int nn;

    while (cin >> nn)
    {
        int count = 0;

        while (nn > 1)
        {
            nn /= 2;
            count++;
        }

        cout << count << endl;
    }

    return 0;
}