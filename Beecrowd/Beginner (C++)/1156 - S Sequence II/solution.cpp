#include <bits/stdc++.h>
using namespace std;

int main()
{
    double s = 0.0;

    for (int i = 0; i < 20; i++)
        s += (2 * i + 1) / pow(2, i);

    cout << fixed << setprecision(2) << s << endl;

    return 0;
}