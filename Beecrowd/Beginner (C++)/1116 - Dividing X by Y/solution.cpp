#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        double x, y;

        cin >> x >> y;

        if (y == 0)

            cout << "divisao impossivel" << endl;

        else
            cout << fixed << setprecision(1) << x / y << endl;
    }
    return 0;
}