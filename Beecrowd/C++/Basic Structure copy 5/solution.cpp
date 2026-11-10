#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{

    int a, b, aa, bb, cc, dd;
    cin >> a >> b;
    vector<vector<int>> arr(a, vector<int>(b));
    for (int l1 = 0; l1 < a; l1++)
    {
        for (int l2 = 0; l2 < b; l2++)
        {
            cin >> arr[l1][l2];
        }
    }
    for (int l1 = 0; l1 < a; l1++)
    {
        for (int l2 = 0; l2 < b; l2++)
        {
            if (arr[l1][l2] == 2)
            {
                aa = l1;
                bb = l2;
            }
            else if (arr[l1][l2] == 1)
            {
                cc = l1;
                dd = l2;
            }
        }
        cout << abs(dd - bb) + abs(cc - aa) << endl;
    }

    return 0;
}
