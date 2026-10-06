#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int n;
    cin >> n;
    string a, b;

    while (n--)
    {
        cin >> a >> b;
        vector<string> nn = {"ataque", "pedra", "papel"}; // air , rock , paper
        if (a == nn[0] && b == nn[0])
        {
            cout << "Aniquilacao mutua";
        }

        else if (a == nn[2] && b == nn[2])
        {
            cout << "Ambos venceram";
        }

        else if (a == nn[1] && b == nn[1])
        {
            cout << "Sem ganhador";
        }

        else if (a == nn[0] && b == nn[1])
        {
            cout << "Jogador 1 venceu";
        }
        else if (a == nn[1] && b == nn[0])
        {
            cout << "Jogador 2 venceu";
        }

        else if (a == nn[1] && b == nn[2])
        {
            cout << "Jogador 1 venceu";
        } // done

        else if (a == nn[2] && b == nn[1])
        {
            cout << "Jogador 2 venceu";
        }
        else if (a == nn[2] && b == nn[0])
        {
            cout << "Jogador 2 venceu";
        }
        else if (a == nn[0] && b == nn[2])
        {
            cout << "Jogador 1 venceu";
        }
    }
    return 0;
}
