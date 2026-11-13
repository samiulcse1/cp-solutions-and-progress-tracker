#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int n;
    cin >> n;
    while (n--) {
        int nn, mm;
        cin >> nn >> mm;
        vector<vector<int>> matrix(nn, vector<int>(mm));
        for (int i = 0; i < nn; i++) {
            for (int j = 0; j < mm; j++) {
                cin >> matrix[i][j];
            }
        }
    }
    return 0;
}
