#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, min = INT_MAX;
    cin >> n;

    vector<int> vec(n);

    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
        if (min > vec[i])
        {

            min = vec[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (min == vec[i])
        {

            cout << "Menor valor: " << vec[i] << endl
                 << "Posicao: " << i << endl;
        }
    }

    return 0;
}
