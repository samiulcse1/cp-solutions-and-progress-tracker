#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, value;
    cin >> t;

    while (t--)
    {
        cin >> value;
        vector<int> a(3);
        for (int i = 0; i < 3; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        cout << value - (a[0]) << endl;
    }

    return 0;
}
