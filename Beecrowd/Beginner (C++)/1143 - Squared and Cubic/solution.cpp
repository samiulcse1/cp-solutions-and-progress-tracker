#include <bits/stdc++.h>
using namespace std;

int main()
{
    int p, q = 1;
    cin >> p;

    while (p--)
    {
        cout << q << " " << pow(q, 2) << " " << pow(q, 3) << endl;
        q++;
    }
}
