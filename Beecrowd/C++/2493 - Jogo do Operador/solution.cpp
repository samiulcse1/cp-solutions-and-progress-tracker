#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{

    int test;
    while (cin >> test)
    {
        cin.ignore();
        vector<string> vcc(test), record;
        for (int i = 0; i < test; i++)
        {
            getline(cin, vcc[i]);
        }
        for (int i = 0; i < test; i++)
        {
            string a;
            int index;
            char c;
            cin >> a >> index >> c;
            if (c == '+')
            {
                if (((vcc[index - 1][0] - '0') + (vcc[index - 1][2] - '0')) != (vcc[index - 1][4] - '0'))
                    record.push_back(a);
            }
            else if (c == '-')
            {
                if (((vcc[index - 1][0] - '0') - (vcc[index - 1][2] - '0')) != (vcc[index - 1][4] - '0'))
                    record.push_back(a);
            }
            else if (c == '*')
            {
                if (((vcc[index - 1][0] - '0') * (vcc[index - 1][2] - '0')) != (vcc[index - 1][4] - '0'))
                    record.push_back(a);
            }
        }
        if (record.size() == 3)
        {
            cout << "You Shall All Pass!" << endl;
        }
    }
    +

        return 0;
}
