#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    vector<int> vec(3);
    for (int i = 0; i < 3; i++)
        cin >> vec[i];

    sort(vec.begin(), vec.end());

    if (vec[0] + vec[1] <= vec[2])
        cout << "Invalido\n";
    else
    {
        if (vec[0] == vec[2])
            cout << "Valido-Equilatero\n";
        else if (vec[0] == vec[1] || vec[1] == vec[2])
            cout << "Valido-Isoceles\n";
        else
            cout << "Valido-Escaleno\n";

        cout << "Retangulo: " << ((vec[0] * vec[0]) + (vec[1] * vec[1]) == (vec[2] * vec[2]) ? 'S' : 'N') << endl;
    }

    return 0;
}
