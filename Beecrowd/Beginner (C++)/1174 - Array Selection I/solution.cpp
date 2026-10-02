#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<double> n(100);

    for (int kk = 0; kk < 100; kk++)
    {

        cin >> n[kk];
    }

    for (int kk = 0; kk < 100; kk++)
    {

        if (n[kk] <= 10.0)
            cout << "A[" << kk << "] = " << showpoint << fixed << setprecision(1) << n[kk] << endl;
        else
            continue;
    }

    return 0;
}
// done