#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c;
    scanf("%lf%lf%lf", &a, &b, &c);

    if (((2 * a) != 0) && (((b * b) - (4 * a * c)) >= 0))

    {
        printf("R1 = %.5lf\n", (((-b) + (sqrt((b * b) - (4 * a * c)))) / (2 * a)));
        printf("R2 = %.5lf\n", (((-b) - (sqrt((b * b) - (4 * a * c)))) / (2 * a)));
    }

    else
    {
        printf("Impossivel calcular\n");
    }
    return 0;
}
