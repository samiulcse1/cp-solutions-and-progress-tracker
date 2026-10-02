#include <bits/stdc++.h>
using namespace std;

int main()
{
    int p, q = 1;
    cin >> p;

    while (p--)
    {
        cout << q << " " << q * q << " " << q * q * q << endl;
        cout << q << " " << q * q + 1 << " " << q * q * q + 1 << endl;
        q++;
    }
}
