#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long t;
    cin >> t;

    while (t--)
    {
        vector<long long> a(3);
        for (int i = 0; i < 3; i++)
        {
            cin >> a[i];
        }
        long long difference = max(abs(a[0] - a[1]), abs(a[0] + a[2] - a[1]));
        cout << difference << endl;
    }

    return 0;
}
