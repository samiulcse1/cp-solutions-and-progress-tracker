#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        int x, y;
        cin >> x >> y;

        if (x % 2 == 0)
            x++;

        int sum = 0;

        for (int i = 0; i < y; i++)
        {
            sum += x;
            x += 2;
        }

        cout << sum << endl;
    }
}