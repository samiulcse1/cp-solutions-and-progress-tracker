#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int hrs, speed;
    scanf("%d%d", &hrs, &speed);
    double dis = (hrs * speed);
    double x = ((1 * dis) / 12);
    printf("%.3lf\n", x);

    return 0;
}
