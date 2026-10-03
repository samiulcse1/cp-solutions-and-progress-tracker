#include <bits/stdc++.h>

using namespace std;
int main()
{

    double id, salary, hours;
    cin >> id >> salary >> hours;

    cout << "NUMBER = " << id << endl
         << fixed << setprecision(2)
         << "SALARY = U$ " << salary * hours << endl;

    return 0;
}