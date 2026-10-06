#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int p, j1, j2, r, a;
    cin >> p >> j1 >> j2 >> r >> a;
    if (r == 1 && a == 1)
    {
        cout << "Jogador 2 ganha!";
    }
    else if (r == 1 && a == 0)
    {
        cout << "Jogador 1 ganha!";
    }
    else if (r == 0 && a == 1)
    {
        cout << "Jogador 1 ganha!";
    }
    else
    {
        int sum = j1 + j2;

        if (p == 1)
        {
            if (sum % 2 == 0)
                cout << "Jogador 1 ganha!";
            else
                cout << "Jogador 2 ganha!";
        }
        else
        {
            if (sum % 2 != 0)
                cout << "Jogador 1 ganha!";
            else
                cout << "Jogador 2 ganha!";
        }
    }
    cout << endl;

    return 0;
}
