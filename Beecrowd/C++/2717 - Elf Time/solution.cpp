#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (b + c <= a)
    {
        cout << "Farei hoje!" << endl;
    }
    else
    {
        cout << "Deixa para amanha!" << endl;
    }
    return 0;
}
