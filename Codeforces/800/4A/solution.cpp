#include <bits/stdc++.h>
using namespace std;

int main()
{

    int w;
    cin >> w;
    if (w < 101 && w > 0)
    {

        ((w % 2) == 0 && w != 2) ? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}
