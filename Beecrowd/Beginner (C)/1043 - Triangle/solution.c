#include <stdio.h>
int main()
{
    double a, b, c, x, y;
    scanf("%lf%lf%lf", &a, &b, &c);
    if (((a + b) > c) && ((b + c) > a) && ((a + c) > b))
    {
        x = a + b + c;
        printf("Perimetro = %.1lf\n", x);
    }

    else
    {
        y = ((c * (a + b)) / 2.0);
        printf("Area = %.1lf\n", y);
    }

    return 0;
}
