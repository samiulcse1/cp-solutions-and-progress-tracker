#include <bits/stdc++.h>
using namespace std;
int main()
{
    while (1)
    {

        int m, n;
        cin >> m >> n;

        if (m < 1 || n < 1)
            break;

        int sum = 0;

        if (m > n)
            swap(m, n);

        for (int i = m; i <= n; i++)
        {
            sum += i;
            cout << i << " ";
        }
        cout << "Sum=" << sum << endl;
    }
    return 0;
}
