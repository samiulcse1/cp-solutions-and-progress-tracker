#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, z;
    cin >> x;

    while (cin >> z && z <= x)
        ;

    int sum = 0, cnt = 0;

    for (int i = x; sum <= z; i++)
        sum += i, cnt++;

    cout << cnt << endl;
}

//
