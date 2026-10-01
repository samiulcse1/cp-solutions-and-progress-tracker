#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    vector<int> vec(4);
    for (int i = 0; i < 4; i++)
    {
        cin >> vec[i];
    }

    sort(vec.begin(), vec.end());

    if (((vec[0] + vec[1]) > vec[2]) || ((vec[1] + vec[2]) > vec[3]))
        cout << "S" << endl;
    else
        cout << "N" << endl;

    return 0;
}
