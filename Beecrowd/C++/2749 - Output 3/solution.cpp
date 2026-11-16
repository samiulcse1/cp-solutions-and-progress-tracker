#include <bits/stdc++.h>
using namespace std;

int main()
{
    const string border(39, '-');
    const string emptyRow = "|" + string(37, ' ') + "|";

    cout << border << '\n'
         << "| x = 35" << string(30, ' ') << "|\n";

    for (int row = 0; row < 4; row++)
    {
        cout << emptyRow << '\n';
    }

    cout << border << '\n';
    return 0;
}
