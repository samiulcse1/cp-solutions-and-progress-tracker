#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{

    int n;
    cin >> n;
    while (n--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a == b && b == c)
        {
            cout << "NO" << endl;
        }
        else
        {
            vector<int> cc = {a, b, c};
            sort(cc.begin(), cc.end());
            cc[0]++;
            cc[2]--;
            if (cc[0] == cc[1] && cc[0] == cc[2])
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }

    return 0;
}
