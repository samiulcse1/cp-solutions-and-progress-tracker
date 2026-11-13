#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b, c;

    while (cin >> a >> b >> c)
    {
        if ((a == "pedra" && b == "tesoura" && c == "tesoura") ||
            (a == "papel" && b == "pedra" && c == "pedra") ||
            (a == "tesoura" && b == "papel" && c == "papel"))
        {
            cout << "Os atributos dos monstros vao ser inteligencia, sabedoria..." << endl;
        }
        else if ((b == "pedra" && a == "tesoura" && c == "tesoura") ||
                 (b == "papel" && a == "pedra" && c == "pedra") ||
                 (b == "tesoura" && a == "papel" && c == "papel"))
        {
            cout << "Iron Maiden's gonna get you, no matter how far!" << endl;
        }
        else if ((c == "pedra" && a == "tesoura" && b == "tesoura") ||
                 (c == "papel" && a == "pedra" && b == "pedra") ||
                 (c == "tesoura" && a == "papel" && b == "papel"))
        {
            cout << "Urano perdeu algo muito precioso..." << endl;
        }
        else
        {
            cout << "Putz vei, o Leo ta demorando muito pra jogar..." << endl;
        }
    }

    return 0;
}
