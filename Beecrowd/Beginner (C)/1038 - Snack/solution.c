#include <stdio.h>
int main()
{
    double x, y;
    scanf("%lf%lf", &x, &y);
    if (x == 1)
    {
        printf("Total: R$ %.2lf\n", (4.0 * y));
    }

    else if (x == 2)
    {
        printf("Total: R$ %.2lf\n", (4.5 * y));
    }
    else if (x == 3)
    {
        printf("Total: R$ %.2lf\n", (5.0 * y));
    }
    else if (x == 4)
    {
        printf("Total: R$ %.2lf\n", (2.0 * y));
    }
    else if (x == 5)
    {
        printf("Total: R$ %.2lf\n", (1.5 * y));
    }

    return 0;
}
