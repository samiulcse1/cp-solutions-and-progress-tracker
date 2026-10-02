#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int k = 1; k <= 10; k++)
    {
        printf("%d x %d = %d\n", k, n, (k * n));
    }
    return 0;
}