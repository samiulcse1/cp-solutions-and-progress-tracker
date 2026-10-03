#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int k = 2; k <= n; k += 2)
    {

        printf("%d^2 = %d\n", k, (k * k));
    }
    return 0;
}