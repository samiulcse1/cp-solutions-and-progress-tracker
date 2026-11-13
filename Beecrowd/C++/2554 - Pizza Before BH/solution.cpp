#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int a, b;
    while (cin >> a >> b)
    {
        vector<string> strings(b);
        vector<vector<int>> numbers(b, vector<int>(a));

        for (int i = 0; i < b; i++)
        {
            cin >> strings[i];
            for (int j = 0; j < a; j++)
            {
                cin >> numbers[i][j];
            }
        }
        string result = "Pizza antes de FdI";
        for (int i = 0; i < b; i++)
        {

            int cc = count(numbers[i].begin(), numbers[i].end(), 0);
            if (cc == 0)
            {
                result = strings[i];
                break;
            }
        }
        cout << result << endl;
    }

    return 0;
}
