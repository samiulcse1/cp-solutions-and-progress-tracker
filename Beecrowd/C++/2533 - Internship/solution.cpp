#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m;
    while (cin >> m)
    {
        double sum = 0, total = 0;

        for (int i = 0; i < m; i++)
        {
            int n, c;
            cin >> n >> c;

            sum += n * c;
            total += c;
        }

        cout << fixed << setprecision(4) << sum / (100.0 * total) << endl;
    }

    return 0;
}