#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    while (n--)
    {
        int num, status = 0;
        cin >> num;

        for (int kkk = 2; kkk < num; kkk++)
        {

            if ((num % kkk) == 0)
            {
                status = 1;
                break;
            }
        }

        if (status == 1)
            cout << num << " nao eh primo" << endl;
        else
            cout << num << " eh primo" << endl;
    }

    return 0;
}
// done 
