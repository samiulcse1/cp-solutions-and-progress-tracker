#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int n;
    cin >> n;

    while (n--)
    {
        string a, b;
        cin >> a >> b;
        if (a == "ataque" && b == "ataque")
        {
            cout << "Sem ganhador" << endl;
        }
        else if (a == "ataque" && b == "pedra")
        {
            cout << "Jogador 1 venceu" << endl;
        }
        else if (a == "pedra" && b == "papel")
        {
            cout << "Jogador 1 venceu" << endl;
        }//done

        else if (a == "papel" && b == "ataque")
        {
            cout << "Jogador 1 venceu" << endl;
        }
    }
    return 0;
}
