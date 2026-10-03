#include <bits/stdc++.h>
using namespace std;

int main()
{

    string a;
    cin >> a;

    cout << a[3] << a[4] << "/" << a[0] << a[1] << "/" << a[6] << a[7] << endl;
    cout << a[6] << a[7] << "/" << a[3] << a[4] << "/" << a[0] << a[1] << endl;
    cout << a[0] << a[1] << "-" << a[3] << a[4] << "-" << a[6] << a[7] << endl;

    return 0;
}
