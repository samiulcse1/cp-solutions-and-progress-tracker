#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int X;
    double Y, x1;
    scanf("%d%lf", &X, &Y);

    x1 = (X / Y);

    printf("%.3lf km/l\n", x1);
    return 0;
}
