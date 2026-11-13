#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{

    int nn, mm;
    while (cin >> nn >> mm)
    {

        vector<vector<int>> matrix(nn + 2, vector<int>(mm + 2));
        for (int i = 1; i <= nn; i++)
        {
            for (int j = 1; j <= mm; j++)
            {
                cin >> matrix[i][j];
            }
        }
        for (int i = 1; i <= nn; i++)
        {
            for (int j = 1; j <= mm; j++)
            {
                if (matrix[i][j] == 1)
                {
                    cout << 9;
                }
                else
                {
                    cout << matrix[i][j - 1] + matrix[i][j + 1] + matrix[i - 1][j] + matrix[i + 1][j];
                }
            }
            cout << endl;
        }
    }
    return 0;
}
