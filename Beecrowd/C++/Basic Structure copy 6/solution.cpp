#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 3;
    int result = 0;
    while (t)
    {
        string cc;
        getline(cin, cc);
        if (cc != "caw caw")
        {
            int base = 2;
            for (int i = 2; i >= 0; i--)
            {
                if (cc[2 - i] == '*')
                {
                    result += pow(base, i);
                }
            }
        }
        else
        {
            cout << result << endl;
            t--;
            result = 0;
        }
    }

    return 0;
}
