#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string ho = "Ho";
    for (int i = 0; i < n; i++)
    {
        (i == n - 1) ? cout << ho << "!" << endl : cout << ho << " ";
    }

    return 0;
}
