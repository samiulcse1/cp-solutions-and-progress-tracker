#include <stdio.h>
int main()
{
    double a, b, x;
    scanf("%lf%lf", &a, &b);
    if (b > a)
    {
        x = b / a;
        int y = b / a;
        if (x == y)
        {
            printf("Sao Multiplos\n");
        }
        else
        {
            printf("Nao sao Multiplos\n");
        }
    }
    else
    {

        x = a / b;
        int y = a / b;

        if (x == y)
        {
            printf("Sao Multiplos\n");
        }
        else
        {
            printf("Nao sao Multiplos\n");
        }
    }

    return 0;
}
