#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int tc = 1; tc <= n; tc++)
    {
        string word1, word2;
        cin >> word1 >> word2;

        cout << "Caso #" << tc << ": ";

        if (word1 == word2)
        {
            cout << "De novo!" << endl;
        }
        else if ((word1 == "tesoura" && (word2 == "papel" || word2 == "lagarto")) ||
                 (word1 == "papel" && (word2 == "pedra" || word2 == "Spock")) ||
                 (word1 == "pedra" && (word2 == "lagarto" || word2 == "tesoura")) ||
                 (word1 == "lagarto" && (word2 == "Spock" || word2 == "papel")) ||
                 (word1 == "Spock" && (word2 == "tesoura" || word2 == "pedra")))
        {
            cout << "Bazinga!" << endl;
        }
        else
        {
            cout << "Raj trapaceou!" << endl;
        }
    }

    return 0;
}
