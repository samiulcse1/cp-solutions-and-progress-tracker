#include <bits/stdc++.h>
using namespace std;
int main()
{

    double a, b, c, pi = 3.14159;
    cin >> a >> b >> c;
    cout << "TRIANGULO: " << fixed << setprecision(3) << 0.5 * a * c << endl;
    cout << "CIRCULO: " << fixed << setprecision(3) << pi * pow(c, 2) << endl;
    cout << "TRAPEZIO: " << fixed << setprecision(3) << 0.5 * (a + b) * c << endl;
    cout << "QUADRADO: " << fixed << setprecision(3) << (b * b) << endl;
    cout << "RETANGULO: " << fixed << setprecision(3) << a * b << endl;
    return 0;
}
