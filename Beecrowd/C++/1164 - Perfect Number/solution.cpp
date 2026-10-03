#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, sum;
    cin >> n;
    while (n--)
    {
        int num;
        cin >> num;
        sum = 0;
        for (int kkk = 1; kkk < num; kkk++)
        {

            if ((num % kkk) == 0)
            {
                sum += kkk;
            }
        }

        if (sum == num)
            cout << num << " eh perfeito" << endl;
        else
            cout << num << " nao eh perfeito" << endl;
    }

    return 0;
} // done
