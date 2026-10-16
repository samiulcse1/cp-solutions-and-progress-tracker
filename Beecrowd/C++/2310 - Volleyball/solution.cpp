#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{

    int n, s, b, a, s1, b1, a1;
    int t1 = 0, t2 = 0, t3 = 0, t4 = 0, t5 = 0, t6 = 0;

    string name;

    cin >> n;

    while (n--)
    {
        cin >> name;
        cin >> s >> b >> a >> s1 >> b1 >> a1;

        t1 += s;
        t2 += b;
        t3 += a;
        t4 += s1;
        t5 += b1;
        t6 += a1;
    }

    cout << fixed << setprecision(2);
    cout << "Pontos de Saque: " << (double)t4 / t1 * 100 << " %.\n";
    cout << "Pontos de Bloqueio: " << (double)t5 / t2 * 100 << " %.\n";
    cout << "Pontos de Ataque: " << (double)t6 / t3 * 100 << " %.\n";

    return 0;
}
