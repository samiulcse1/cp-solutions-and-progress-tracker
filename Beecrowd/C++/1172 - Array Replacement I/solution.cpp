#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> n(10);

    for (int kk = 0; kk < 10; kk++)
    {
        /* code */

        cin >> n[kk];
    }

    for (int kk = 0; kk < 10; kk++)
    {
        /* code */

        if (n[kk] < 1)
            cout << "X[" << kk << "] = " << 1 << endl;
        else
            cout << "X[" << kk << "] = " << n[kk] << endl;
    }

    return 0;
}
// Done