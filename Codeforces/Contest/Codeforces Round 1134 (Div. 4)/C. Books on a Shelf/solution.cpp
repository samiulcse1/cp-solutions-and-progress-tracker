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
        vector<int> vcc(num);
        for (int i = 0; i < num; i++)
        {
            cin >> vcc[i];
        }
        sort(vcc.begin(), vcc.end());
        vector<int> pp, bb;
        pp.push_back(vcc[0]);
        for (int i = 1; i < num; i++)
        {
            if (vcc[i] == vcc[i - 1])
            else
                pp.push_back(vcc[i]);
        }
        reverse(bb.begin(), bb.end());
        int k = pp.size();
        pp.insert(pp.end(), bb.begin(), bb.end());
        cout << k << endl;
        for (int i = 0; i < pp.size(); i++)
        {
            cout << pp[i];
            (i == (pp.size() - 1)) ? cout << endl : cout << " ";
        }
    }

    return 0;
}
