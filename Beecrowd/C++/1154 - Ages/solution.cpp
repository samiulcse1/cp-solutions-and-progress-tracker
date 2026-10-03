#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, sum = 0, cnt = 0;

    while (cin >> x && x >= 0)
        sum += x, cnt++;

    cout << fixed << setprecision(2) << (double)sum / cnt << "\n";
} // checked again