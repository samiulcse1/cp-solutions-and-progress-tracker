#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t = 2;
    double x, sum = 0.0;
    while (t && cin >> x)
    {
        if ((x >= 0.0) && (x <= 10.0))
        {
            sum += x;
            t--;
        }
        else
        {
            cout << "nota invalida" << endl;
        }
    }

    cout << fixed << setprecision(2) << "media = " << sum / 2.0 << endl;

    return 0;
}