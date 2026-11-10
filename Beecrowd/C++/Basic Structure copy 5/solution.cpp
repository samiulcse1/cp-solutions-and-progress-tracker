#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{

    int a, b;
    cin >> a >> b;
    int arr[a][b];
    int aa, bb, cc, dd;

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
    }

    return 0;
}
