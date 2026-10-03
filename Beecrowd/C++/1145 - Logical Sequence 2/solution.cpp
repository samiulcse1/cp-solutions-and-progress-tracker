#include <bits/stdc++.h>
using namespace std;
int main()
{
    int p, q, k = 1;
    cin >> p >> q;
    while (k <= q)
    {
        int m = p;
        while (m-- && (k <= q))
        {
            cout << k;

            if (m > 0)
            {
                cout << " ";
            }
            k++;
        }
        cout << endl;
    }
    return 0;
}
