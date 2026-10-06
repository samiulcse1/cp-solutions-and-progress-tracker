#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int n;
    cin >> n;
    if (n == 0)
    {
        cout << "Caso 1: 1 numero\n";
        cout << 0 << endl;
    }
    else
    {
        
        cout << 0;
        for (int i = 1; i < n + 1; i++)
        {

            for (int kk = 0; kk < i; kk++)
            {
                cout << " ";
                cout << i;
            }
        }
    }
    return 0;
}
