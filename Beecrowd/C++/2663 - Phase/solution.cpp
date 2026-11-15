#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int a, b;
    cin >> a >> b;
    int count = b;
    vector<int> cc(a);
    for (int i = 0; i < a; i++)
    {
        cin >> cc[i];
    }
    sort(cc.rbegin(), cc.rend());
    for (int i = b - 1; i < cc.size(); i++)
    {
        if (cc[i + 1] != cc[i])
        {
            break;
        }
        else
        {
            count++;
        }
    }
    cout << count << endl;

    return 0;
}
