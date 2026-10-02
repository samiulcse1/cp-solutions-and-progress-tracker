#include <stdio.h>
#include <string.h>
int main()
{
    double a;
    scanf("%lf", &a);

    if ((a >= 0.0) && (a <= 2000.00))
    {
        printf("Isento\n");
    }
    else if (a <= 3000.00)
    {
        printf("R$ %.2lf\n", ((a - 2000.0) * 0.08));
    }
    else if (a <= 4500.00)
    {
        printf("R$ %.2lf\n", (80 + ((a - 3000.0) * 0.18)));
    }
    else if (a > 4500.00)
    {
        printf("R$ %.2lf\n", (350 + ((a - 4500.0) * 0.28)));
    }

    return 0;
}
