#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }

    int curr = 0, count = 0;
    while (curr >= 0 && curr < n)
    {
        if (vec[curr] % 2 == 0)
        {
            vec[curr]--;
            count++;
            curr--;
                }
        else
        {
            vec[curr]--;
            count++;
            curr++;
        }
    }
    int t2 = accumulate(vec.begin(), vec.end(), 0LL);
    cout << count << " " << t2 << endl;

    return 0;
}
