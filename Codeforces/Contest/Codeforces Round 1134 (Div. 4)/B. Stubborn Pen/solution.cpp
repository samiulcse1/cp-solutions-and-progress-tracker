#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{

    int n;
    cin >> n;
    while (n--)
    {
        int size, count = 0;
        cin >> size;
        vector<int> stt(size);
        for (int i = 0; i < size; i++)
        {
            char a;
            cin >> a;
            (a == 'R') ? stt[i] = 0 : stt[i] = 1;
        }
        int curr = stt[0];
        for (int i = 1; i < size; i++)
        {
            if (curr == stt[i])
            {
                count++;
                (stt[i] == 0) ? stt[i] = 1 : stt[i] = 0;
            }
            curr = stt[i];
        }
    }

    return 0;
}
