#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a = 0, b = 1;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << a << (i == n - 1 ? '\n' : ' ');
        a += b;
        swap(a, b);
    }
}

//