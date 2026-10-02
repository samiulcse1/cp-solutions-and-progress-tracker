#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t = 0;
    double x, sum = 0;
    while (1)
    {
        cin >> x;
        if ((x >= 0.0) && (x <= 10.0))
        {
            sum += x;
            t++;
        }
        else
        {
            cout << "nota invalida" << endl;
        }

        if (t == 2)
        {
            cout << fixed << setprecision(2) << "media = " << sum / 2.0 << endl;
            t = 0, sum = 0;
            int p;
            cout << "novo calculo (1-sim 2-nao)" << endl;
            while (cin >> p)
            {
                if (p == 1)
                {
                    break;
                }
                else if (p == 2)
                {
                    return 0;
                }
                else
                {
                    cout << "novo calculo (1-sim 2-nao)" << endl;
                }
            }
        }
    }

    return 0;
}
