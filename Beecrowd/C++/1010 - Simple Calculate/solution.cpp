
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int code, unit;
    double price, total_price = 0.0;
    for (int i = 1; i <= 2; i++)
    {
        cin >> code >> unit >> price;
        total_price += (unit * price);
    }
    cout << "VALOR A PAGAR: R$ " << fixed
         << setprecision(2) << total_price << endl;
    return 0;
}
