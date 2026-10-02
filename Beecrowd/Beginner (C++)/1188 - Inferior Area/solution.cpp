#include <bits/stdc++.h>
using namespace std;

int main()
{
    char p;
    cin >> p;

    double arr[12][12];

    for (int k = 0; k < 12; k++)
    {
        for (int kk = 0; kk < 12; kk++)
        {
            cin >> arr[k][kk];
        }
    }

    double sum = 0;

    for (int k = 7; k < 12; k++)
    {
        for (int kk = 11 - (k-1); kk < k; kk++)
        {
            sum += arr[k][kk];
        }
    }

    cout << fixed << setprecision(1);

    if (p == 'S')
    {
        cout << sum << endl;
    }
    else if (p == 'M')
    {
        cout << sum / 30.0 << endl;
    }

    return 0;
}
