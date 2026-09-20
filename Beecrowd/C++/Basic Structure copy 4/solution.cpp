#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    while (n--)
    {
        string p1, c1, p2, c2;
        long long n, m;

        cin >> p1 >> c1 >> p2 >> c2;
        cin >> n >> m;

        if ((n + m) % 2 == 0)
            cout << (c1 == "PAR" ? p1 : p2) << endl;
        else
            cout << (c1 == "IMPAR" ? p1 : p2) << endl;
    }

    return 0;
}
