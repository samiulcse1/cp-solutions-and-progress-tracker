#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int a, b, p = 0, q = 0;
    cin >> a >> b;
    int arr[a][b];
    for (int i = 0; i < a; i++)
    {
        for (int ii = 0; ii < b; ii++)
        {
            cin >> arr[i][ii];
        }
    }
    for (int i = 1; i < a - 1; i++)
    {
        for (int ii = 1; ii < b - 1; ii++)
        {
            if (arr[i][ii] == 42)
            {
                if (((arr[i][ii - 1] == 7)) && (arr[i + 1][ii] == 7) &&
                    (arr[i][ii + 1] == 7) && (arr[i - 1][ii] == 7) &&
                    (arr[i - 1][ii - 1] == 7) && (arr[i - 1][ii + 1] == 7) &&
                    (arr[i + 1][ii - 1] == 7) && (arr[i + 1][ii + 1] == 7))
                {
                    p = i + 1;
                    q = ii + 1;
                }
            }
        }
    }
    cout << p << " " << q << endl;

    return 0;
}
