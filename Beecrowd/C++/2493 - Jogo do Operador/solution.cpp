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
            int index, x, y, z;
            char c;
            cin >> a >> index >> c;
            int ss = vcc[index - 1].find(' ');
            int eqq = vcc[index - 1].find('=');

            x = stoi(vcc[index - 1].substr(0, ss));
            y = stoi(vcc[index - 1].substr(ss + 1, eqq - ss - 1));
            z = stoi(vcc[index - 1].substr(eqq + 1));

            if (c == '+')
            {
                if (x + y != z)
                {
                    record.push_back(a);
                }
            }
            else if (c == '-')
            {
                if (x - y != z)
                {
                    record.push_back(a);
                }
            }
            else if (c == '*')
            {
                if (x * y != z)
                {
                    record.push_back(a);
                }
            }
            else if (c == 'I')
            {
                if ((x + y == z) ||
                    (x - y == z) ||
                    (x * y == z))
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
