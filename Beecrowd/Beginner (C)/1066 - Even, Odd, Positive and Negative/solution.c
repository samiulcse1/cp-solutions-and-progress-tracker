#include <stdio.h>
int main()
{
    double arr[5];
    int count = 0, count1 = 0, count2 = 0, count3 = 0;
    for (int i = 0; i < 5; i++)
    {
        scanf("%lf", &arr[i]);

        if ((int)arr[i] % 2 == 0)
        {
            count++;
        }
        if ((int)arr[i] % 2 != 0)
        {
            count1++;
        }
        if (arr[i] > 0)
        {
            count2++;
        }
        if (arr[i] < 0)
        {
            count3++;
        }
    }
    printf("%d valor(es) par(es)\n", count);
    printf("%d valor(es) impar(es)\n", count1);

    printf("%d valor(es) positivo(s)\n", count2);
    printf("%d valor(es) negativo(s)\n", count3);

    return 0;
}
