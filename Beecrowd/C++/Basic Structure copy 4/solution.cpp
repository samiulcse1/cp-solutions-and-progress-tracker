#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{

    int target;
    cin >> target;

    vector<int> vc(5);
    for (int i = 0; i < 5; i++)
    {
        cin >> vc[i];
    }

    cout << count(vc.begin(), vc.end(), target);
    return 0;
}
