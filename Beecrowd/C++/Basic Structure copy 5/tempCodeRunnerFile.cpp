#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    string a, b;
    while (cin >> a && cin >> b)
    {
        vector<string> cc;
        for (int i = 0; i < b.size(); i++)
        {
            for (int k = i; k < b.size(); k += (a.length()))
            {
                cc.push_back(b.substr(i, k));
            }
        }
        cout << count(cc.begin(), cc.end(), a) << endl;
    }

    return 0;
}
