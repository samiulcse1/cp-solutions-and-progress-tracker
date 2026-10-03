#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;

    while (cin >> x && x != 0)
    {
        if (x % 2 != 0)
            x++;

        int sum = 0;

        for (int i = 0; i < 5; i++)
        {
            sum += x;
            x += 2;
        }

        cout << sum << endl;
    }
}