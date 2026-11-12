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
        if (stt[0] == 1)
        {
            count++;
            // stt[0] = 0;
        }
        int curr = stt[0];

        for (int i = 1; i < size; i++)
        {
            if (curr == stt[i])
            {
                count++;
                (curr == 0) ? stt[i] = 1 : stt[i] = 0;
            }
            curr = stt[i];
        }
        (stt[0] == 0) ? cout << "------" << count << endl : cout << "------" << count << endl;
    }

    return 0;
}
