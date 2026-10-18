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
            cin >> a;
            cin.ignore();
            cin >> index;
            cin.ignore();
            cin >> c;
            if (c == '+')
            {
                if (((vcc[index - 1][0] - '0') + (vcc[index - 1][2] - '0')) != (vcc[index - 1][4] - '0'))
                {
                    record.push_back(a);
                }
            }
            else if (c == '-')
            {
                if (((vcc[index - 1][0] - '0') - (vcc[index - 1][2] - '0')) != (vcc[index - 1][4] - '0'))
                {

                    record.push_back(a);
                }
            }
            else if (c == '*')
            {
                if (((vcc[index - 1][0] - '0') * (vcc[index - 1][2] - '0')) != (vcc[index - 1][4] - '0'))
                {
                    record.push_back(a);
                }
            }
            else if (c == 'I')
            {
                if (((vcc[index - 1][0] - '0') + (vcc[index - 1][2] - '0') == (vcc[index - 1][4] - '0')) ||
                    ((vcc[index - 1][0] - '0') - (vcc[index - 1][2] - '0') == (vcc[index - 1][4] - '0')) ||
                    ((vcc[index - 1][0] - '0') * (vcc[index - 1][2] - '0') == (vcc[index - 1][4] - '0')))
                {
                    record.push_back(a);
                }
            }
        }
        if (record.size() == 0)
        {
            cout << "You Shall All Pass!" << endl;
        }
        else if (record.size() == test)
        {
            cout << "None Shall Pass!" << endl;
        }
        else
        {
            sort(record.begin(), record.end());
            for (int ii = 0; ii < record.size(); ii++)
            {
                cout << record[ii];
                if (ii < record.size() - 1)
                    cout << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
