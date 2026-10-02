#include <bits/stdc++.h>
using namespace std;

int main()
{
    int p, q = 1;

    cin >> p;

    while (p--)
    {

        cout << q << " " << q + 1 << " " << q + 2 << " PUM" << endl;
        q += 4;
    }
}
