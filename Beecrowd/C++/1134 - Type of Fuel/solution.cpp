#include <bits/stdc++.h>
using namespace std;

int main()
{
    int c, a = 0, g = 0, d = 0;
    while (cin >> c && c != 4)
        a += c == 1, g += c == 2, d += c == 3;
    cout << "MUITO OBRIGADO" << endl
         << "Alcool: " << a << endl
         << "Gasolina: " << g << endl
         << "Diesel: " << d << endl; 
} // DONE