#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int pa, pb, y = 0;
        double g1, g2;
        cin >> pa >> pb >> g1 >> g2;

        while (pa <= pb && y <= 100)
        {
            pa += pa * g1 / 100;
            pb += pb * g2 / 100;
            y++;
        }

        if (y > 100)
            cout << "Mais de 1 seculo." << endl;
        else
            cout << y << " anos." << endl;
    }
}