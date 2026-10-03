#include <stdio.h>
int main()
{
    int i = 0, n[20];
    for (int i = 0; i < 20; i++)
    {
        scanf("%d", &n[i]);
    }
    for (int k = 19; k >= 0; k--)
    {

        printf("N[%d] = %d\n", i, n[k]);
        i++;
    }

    return 0;
}
