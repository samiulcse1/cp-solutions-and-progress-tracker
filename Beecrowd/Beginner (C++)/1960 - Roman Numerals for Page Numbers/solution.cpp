#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int x;
    cin >> x;

    vector<pair<int, string>> vec = {
        {1000, "M"},
        {900, "CM"},
        {500, "D"},
        {400, "CD"},
        {100, "C"},
        {90, "XC"},
        {50, "L"},
        {40, "XL"},
        {10, "X"},
        {9, "IX"},
        {5, "V"},
        {4, "IV"},
        {1, "I"}};
    for (int i = 0; i < vec.size(); i++)
    {
        while (x >= vec[i].first)
        {
            cout << vec[i].second;
            x -= vec[i].first;
        }
    }
    cout << endl;

    return 0;
}
