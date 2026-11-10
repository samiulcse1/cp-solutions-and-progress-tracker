#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{

    string aa;
    int size, pos;
    while (cin >> aa)
    {
        cin >> size;
        for (int i = 0; i < size; i++)
        {
            cin >> pos;
            cout << aa[pos - 1];
        }
        cout << endl;
    }
    return 0;
}
