#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{

    int test;
    while (cin >> test)
    {
        vector<string> record;
        vector<int> aa(test), bb(test), cc(test);
        for (int i = 0; i < test; i++)
        {
            char eq;
            cin >> aa[i] >> bb[i] >> eq >> cc[i];
        }
        for (int i = 0; i < test; i++)
        {
            string a;

            int index, x, y, z;
            char c;
            cin >> a >> index >> c;

            x = aa[index - 1];
            y = bb[index - 1];
            z = cc[index - 1];

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