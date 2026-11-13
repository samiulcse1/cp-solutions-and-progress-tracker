#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int nn, mm;
        cin >> nn >> mm;
        vector<vector<int>> matrix(nn + 1, vector<int>(mm + 1));
        for (int i = 1; i < nn - 1; i++)
        {
            for (int j = 1; j < mm - 1; j++)
            {
                cin >> matrix[i][j];
            }
        }
        for (int i = 1; i < nn - 1; i++)
        {
            for (int j = 1; j < mm - 1; j++)
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
