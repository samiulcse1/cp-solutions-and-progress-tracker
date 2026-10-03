#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;

    while (cin >> x && x != 0)
    {
        for (int i = 1; i <= x; i++)
        {
            cout << i << (i == x ? '\n' : ' ');
        }
    }
}