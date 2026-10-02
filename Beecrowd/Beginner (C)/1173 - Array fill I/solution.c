#include <stdio.h>
int main()
{
    int a, n[10];
    scanf("%d", &a);
    for (int i = 0; i < 10; i++)
    {
        n[i] = a;
        a *= 2;
    }
    for (int k = 0; k < 10; k++)
    {
        printf("N[%d] = %d\n", k, n[k]);
    }

    return 0;
}
