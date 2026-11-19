#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int a, b, c;

    cin >> a >> b >> c;
    cout << "A = " << a << ", B = " << b << ", C = " << c << endl;
    cout << "A = " << right << setw(10) << a;
    cout << ", B = " << right << setw(10) << b;
    cout << ", C = " << right << setw(10) << c << endl;
    cout << "A = " << internal << setfill('0') << setw(10) << a;
    cout << ", B = " << internal << setw(10) << b;
    cout << ", C = " << internal << setw(10) << c << endl;
    cout << setfill(' ') << left;
    cout << "A = " << setw(10) << a;
    cout << ", B = " << setw(10) << b;
    cout << ", C = " << setw(10) << c << endl;

    return 0;
}
