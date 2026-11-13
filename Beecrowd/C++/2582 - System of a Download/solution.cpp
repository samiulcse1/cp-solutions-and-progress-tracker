
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int c;
    cin >> c;

    vector<string> songs = {
        "PROXYCITY",
        "P.Y.N.G.",
        "DNSUEY!",
        "SERVERS",
        "HOST!",
        "CRIPTONIZE",
        "OFFLINE DAY",
        "SALT",
        "ANSWER!",
        "RAR?",
        "WIFI ANTENNAS"};

    while (c--)
    {
        int x, y;
        cin >> x >> y;

        cout << songs[x + y] << endl;
    }

    return 0;
}
