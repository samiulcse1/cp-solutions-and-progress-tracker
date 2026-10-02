#include <stdio.h>

int main()
{
        double A, B, C;
        scanf("%lf%lf%lf", &A, &B, &C);
        double f = ((A * 2) + (B * 3) + (C * 5)) / 10;
        printf("MEDIA = %.1lf\n", f);

        return 0;
}
