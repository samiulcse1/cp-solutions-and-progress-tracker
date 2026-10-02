#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    char p;
    cin >> n >> p;
    double arr[12][12];

    for (int k = 0; k < 12; k++)
    {
        for (int kk = 0; kk < 12; kk++)
        {
            cin >> arr[k][kk];
        }
    }
    if (p == 'S')
    {
        double sum = 0;

        for (int kk = 0; kk < 12; kk++)
        {
            sum += arr[n][kk];
        }
        cout << fixed << setprecision(1) << sum << endl;
    }
    else if (p == 'M')
    {
        double sum = 0;

        for (int kk = 0; kk < 12; kk++)
        {
            sum += arr[n][kk];
        }
        cout << fixed << setprecision(1) << (sum / 12.0) << endl;
    }

    return 0;
}
