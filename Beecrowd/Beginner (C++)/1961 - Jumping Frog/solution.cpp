#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int s, n;
    cin >> s >> n;

    vector<int> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
        vec[i] = (vec[i]);
    }
    int st = 0;
    for (int i = 0; i < vec.size() - 1; i++)
    {
        if ((abs(vec[i] - vec[i + 1])) > s)
        {
            st = 1;
            break;
        }
    }
    (st == 0) ? cout << "YOU WIN" : cout << "GAME OVER";
    cout << endl;

    return 0;
}
