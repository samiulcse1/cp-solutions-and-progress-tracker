#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int c;
    vector<pair<string, int>> vcc = {
        {"suco de laranja", 120},
        {"morango fresco", 85},
        {"mamao", 85},
        {"goiaba vermelha", 70},
        {"manga", 56},
        {"laranja", 50},
        {"brocolis", 34}};

    while (cin >> c && c != 0)
    {
        int sum = 0;

        while (c--)
        {
            int a;
            string b;
            cin >> a;
            cin.ignore();
            getline(cin, b);
            for (int i = 0; i < 7; i++)
            {
                if (b == vcc[i].first)
                {
                    sum += vcc[i].second * a;
                }
            }
        }

        if (sum > 130)
            cout << "Menos " << sum - 130 << " mg" << endl;
        else if (sum < 110)
            cout << "Mais " << 110 - sum << " mg" << endl;
        else
            cout << sum << " mg" << endl;
    }

    return 0;
}