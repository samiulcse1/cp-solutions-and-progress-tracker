#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double x1, y1, x2, y2, d;
    scanf("%lf%lf%lf%lf", &x1, &y1, &x2, &y2);

    d = (pow((x2 - x1), 2) + pow((y2 - y1), 2));

    printf("%.4lf\n", sqrt(d));
    return 0;
}
