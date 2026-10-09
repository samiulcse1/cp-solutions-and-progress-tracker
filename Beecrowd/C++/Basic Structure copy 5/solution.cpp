#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int khorch, paid;
    while (cin >> khorch >> paid && (khorch != 0) && (paid != 0))
    {

        vector<int> notes = {100, 50, 20, 10, 5, 2};
        int val = paid - khorch;
        for (int i = 0; i < notes.size(); i++)
        {
            if (val >= notes[i])
            {
                cout << val << endl;
                val -= notes[i];
            }
        }
        val == 0 ? cout << "possible\n" : cout << "impossible\n";
    }

    return 0;
}
