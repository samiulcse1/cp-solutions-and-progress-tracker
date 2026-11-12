#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int nn, id;

    while (cin >> nn >> id)
    {
        int count = 0;

        for (int i = 0; i < nn; i++)
        {
            int ii, jj;
            cin >> ii >> jj;

            if (ii == id && jj == 0)
            {
                count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}