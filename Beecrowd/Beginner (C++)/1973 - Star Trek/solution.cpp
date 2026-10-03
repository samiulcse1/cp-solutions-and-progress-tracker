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
    vector<int> vec2(n, 1);
    int curr = 0;
    while (curr > -1 && curr < n)
    {
        vec2[curr] = 0;
        if (vec[curr] == 0)
        {
            break;
        }
        if (vec[curr] % 2 == 0)
        {
            vec[curr]--;
            curr--;
        }
        else
        {
            vec[curr]--;
            curr++;
        }
    }
    int t2 = accumulate(vec.begin(), vec.end(), 0LL);
    int count = accumulate(vec2.begin(), vec2.end(), 0LL);

    cout << n - count << " " << t2 << endl;

    return 0;
}
