#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int s, b;
    cin >> s >> b;
    while (b--)
    {

        string name;
        cin >> name;

        if (name == "")
        {
            s += 2;
        }
        else
            s--;
    }
    cout << s << endl;

    return 0;
}
