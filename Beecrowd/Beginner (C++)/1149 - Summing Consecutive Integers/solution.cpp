#include <bits/stdc++.h>
using namespace std;

int main()
{

    int a, n;

    cin >> a;
    while (cin >> n && (n < 1))
        ;

    int sum = 0;
    while (n--)
    {

        sum += a;
        a++;
    }
    cout << sum << endl;

    return 0;
}

///