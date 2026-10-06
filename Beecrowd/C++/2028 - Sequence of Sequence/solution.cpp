#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int n, caso = 1;
    while (cin >> n)
    {
        n = abs(n);
        if (n == 0)
        {
            cout << "Caso " << caso << ": 1 numero\n";
            cout << 0 << endl
                 << endl;
        }
        else
        {
            vector<int> vcc;
            vcc.push_back(0);
            for (int i = 1; i < n + 1; i++)
            {
                for (int kk = 0; kk < i; kk++)
                {
                    vcc.push_back(i);
                }
            }
            cout << "Caso " << caso << ": " << vcc.size() << " numeros" << endl;
            for (int kkk = 0; kkk < vcc.size(); kkk++)
            {
                cout << vcc[kkk];
                if (kkk != vcc.size() - 1)
                    cout << " ";
            }
            cout << endl
                 << endl;
        }
        caso++;
    }
    return 0;
}
/****
 * AI IMPROVED VERSION------
int main()
{
    int n, caso = 1;
    while (cin >> n)
    {
        n = abs(n);
        int total = n * (n + 1) / 2 + 1;
        cout << "Caso " << caso << ": " << total
             << (total == 1 ? " numero\n" : " numeros\n");
        cout << 0;
        for (int i = 1; i <= n; i++)
            for (int j = 0; j < i; j++)
                cout << ' ' << i;

        cout << "\n\n";
        caso++;
    }
}



basically formula use korayyy shorted......
 *
 */