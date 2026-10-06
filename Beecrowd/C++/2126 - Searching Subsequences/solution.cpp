#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    string a, b;
    int caso = 1;
    while (cin >> a && cin >> b)
    {
        vector<string> cc;
        for (int i = 0; i < b.size(); i++)
        {

            cc.push_back(b.substr(i, a.size()));
            // cout << b.substr(i, k) << "\n ";
        }
        int n = count(cc.begin(), cc.end(), a);
        if (n == 0)
        {
            cout << "Caso #" << caso << ":\n";
            cout << "Nao existe subsequencia" << endl
                 << endl;
        }
        else
        {
            int pos = 0;

            for (int i = 0; i < b.size(); i++)
            {
                if (b.substr(i, a.size()) == a)
                    pos = i + 1;
            }
            cout << "Caso #" << caso << ":\n"
                 << "Qtd.Subsequencias: " << n << "\n"
                 << "Pos: " << pos << endl
                 << endl;
        }
        caso++;
    }

    return 0;
}
