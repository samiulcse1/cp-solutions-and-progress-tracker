#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{

    int c;
    double ss;
    string name;
    cin >> c;
    while (c--)
    {
        vector<double> vec(7);
        cin >> name >> ss;
        for (int i = 0; i < 7; i++)
        {
            cin >> vec[i];
        }
        sort(vec.begin(), vec.end());
        double tt = (accumulate(vec.begin(), vec.end(), 0.0) - vec[0] - vec[6]) * d;
    }
    return 0;
}
