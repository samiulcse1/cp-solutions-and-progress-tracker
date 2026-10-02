#include <stdio.h>

int main()
{
    double a, b;
    scanf("%lf%lf", &a, &b);
    if (a == 0.00 && b == 0.00)
    {
        printf("Origem\n");
    }

    else if (a != 0.00 && b == 0.00)
    {
        printf("Eixo X\n");
    }
    else if (a == 0.00 && b != 0.00)
    {
        printf("Eixo Y\n");
    }

    else if (a > 0.00 && b > 0.00)
    {
        printf("Q1\n");
    }
    else if (a < 0.00 && b > 0.00)
    {
        printf("Q2\n");
    }
    else if (a < 0.00 && b < 0.00)
    {
        printf("Q3\n");
    }
    else if (a > 0.00 && b < 0.00)
    {
        printf("Q4\n");
    }

    return 0;
}
