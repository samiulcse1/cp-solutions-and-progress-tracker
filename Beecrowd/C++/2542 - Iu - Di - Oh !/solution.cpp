#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int nn, aa, bb;

    while (cin >> nn >> aa >> bb)
    {

        vector<vector<int>> vcc1(aa, vector<int>(nn)), vcc2(bb, vector<int>(nn));
        for (int i = 0; i < aa; i++)
        {
            for (int ii = 0; ii < nn; ii++)
            {
                cin >> vcc1[i][ii];
            }
        }
        for (int i = 0; i < bb; i++)
        {
            for (int ii = 0; ii < nn; ii++)
            {

                cin >> vcc2[i][ii];
            }
        }
        int n1, n2, ss;
        cin >> n1 >> n2 >> ss;
        if (vcc1[n1 - 1][ss - 1] == vcc2[n2 - 1][ss - 1])
        {
            cout << "Empate" << endl;
        } //        vcc1[n1-1][ss-1]
        else if (vcc1[n1 - 1][ss - 1] > vcc2[n2 - 1][ss - 1])
        {
            cout << "Marcos" << endl;
        }
        else
        {
            cout << "Leonardo" << endl;
        }
    }

    return 0;
}
