#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int days;
    scanf("%d", &days);
    int x = days / 365;
    int y = ((days - (x * 365)) / 30);
    int z = ((days - ((x * 365) + (y * 30))));

    printf("%d ano(s)\n", x);
    printf("%d mes(es)\n", y);
    printf("%d dia(s)\n", z);

    return 0;
}