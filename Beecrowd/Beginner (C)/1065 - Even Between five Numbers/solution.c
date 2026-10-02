#include <stdio.h>
int main()
{
    double arr[5];
    int count = 0;
    for (int i = 0; i < 5; i++)
    {
        scanf("%lf", &arr[i]);

        if ((int)arr[i] % 2 == 0)
        {
            count++;
            //  sum+= arr[i];
        }
    }
    printf("%d valores pares\n", count);
    return 0;
}
