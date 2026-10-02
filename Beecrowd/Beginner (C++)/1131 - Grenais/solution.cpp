#include <bits/stdc++.h>
using namespace std;

int main()
{
    int p, q, inter = 0, gremio = 0, draw = 0, total = 0, req = 1;

    while (1)
    {
        cin >> p >> q;
        total++;

        if (p > q)
            inter++;
        else if (p < q)
            gremio++;
        else
            draw++;

        cout << "Novo grenal (1-sim 2-nao)" << endl;
        cin >> req;

        if (req == 1)
            continue;
        else if (req == 2)
            break;
    }

    cout << total << " grenais" << endl;
    cout << "Inter:" << inter << endl;
    cout << "Gremio:" << gremio << endl;
    cout << "Empates:" << draw << endl;

    if (inter > gremio)
        cout << "Inter venceu mais" << endl;
    else if (gremio > inter)
        cout << "Gremio venceu mais" << endl;
    else
        cout << "Não houve vencedor" << endl;

    return 0;
}