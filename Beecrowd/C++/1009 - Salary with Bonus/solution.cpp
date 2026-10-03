#include <bits/stdc++.h>
using namespace std;
int main()
{
    char name[100];
    double salary, sales;

    cin >> name >> salary >> sales;

    cout << "TOTAL = R$ "
         << fixed << setprecision(2)
         << salary + (sales * 0.15) << endl;

    return 0;
}
