#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{

    int n;
    cin >> n;
    while (n--)
    {
        int num;
        cin >> num;
        vector<int> vcc(num), pp, bb;
        for (int i = 0; i < num; i++)
        {
            cin >> vcc[i];
        }
        sort(vcc.rbegin(), vcc.rend());
        for (int i = num; i > 0; i--)
        {
            if (vcc[i - 1] == vcc[i])
            {
                pp.push_back(vcc[i]);
            }
            else
                pp.push_back(vcc[i]);
        }
    }
    return 0;
}
