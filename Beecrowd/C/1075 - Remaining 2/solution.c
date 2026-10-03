#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int k = 1; k <= 10000; k++)
    {
        if ((k % n) == 2)
        {
            printf("%d\n", k);
        }
    }
    return 0;
}