#include <bits/stdc++.h>
using namespace std;

int main()
{

    int number;
    while ((cin >> number) && number >= 3 && number < 70)
    {

        int arr[number][number];
        for (int i = 0; i < number; i++)
        {
            for (int ii = 0; ii < number; ii++)
            {

                if (i == ii)
                {

                    arr[i][ii] = 1;
                }
                else if ((ii + i) == (number - 1))
                {
                    arr[i][ii] = 2;
                }
                else
                {
                    arr[i][ii] = 3;
                }
            }
        }
        if (number % 2 != 0)
        {

            arr[number / 2][number / 2] = 2;
        }
        for (int i = 0; i < number; i++)
        {
            for (int ii = 0; ii < number; ii++)
            {

                cout << arr[i][ii];
            }
            cout << endl;
        }
    }

    return 0;
}
