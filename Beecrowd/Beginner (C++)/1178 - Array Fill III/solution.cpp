#include <bits/stdc++.h>
using namespace std;

int main()
{

    double n;
    cin >> n;
    vector<double> vec;
    vec.push_back(n);

    int i = 98;

    while (i--)
    {
        n /= 2.0;
        vec.push_back(n);
    }

    for (int i = 0; i < 100; i++)
    {
        cout << "N[" << i << "] = " << showpoint << fixed << setprecision(4) << vec[i] << endl;
    }

    return 0;
}
//done 