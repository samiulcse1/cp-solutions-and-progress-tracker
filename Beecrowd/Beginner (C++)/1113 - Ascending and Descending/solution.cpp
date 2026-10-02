#include <bits/stdc++.h>
using namespace std;
int main()
{

    int x, y;
    while (cin >> x >> y && x != y)
    {

        (x < y) ? cout << "Crescente" << endl : cout << "Decrescente" << endl;
    }
    return 0;
}
