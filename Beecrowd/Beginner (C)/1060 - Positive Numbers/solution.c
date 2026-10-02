#include <stdio.h>

int main()
{

    int k, count = 0;
    double a;
    for (k = 1; k <= 6; k++)
    {
        scanf("%lf", &a);
        if (a >= 0.0)
        {
            count++;
        }
    }
    printf("%d valores positivos\n", count);

    return 0;
}
