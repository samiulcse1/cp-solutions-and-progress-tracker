#include <stdio.h>

int main()
{
    int par[5], impar[5];
    int cp = 0, ci = 0;

    for (int i = 0; i < 15; i++)
    {
        int x;
        scanf("%d", &x);

        if (x % 2 == 0)
        {
            par[cp] = x;
            cp++;
            if (cp == 5)
            {
                for (int j = 0; j < 5; j++)
                {
                    printf("par[%d] = %d\n", j, par[j]);
                }
                cp = 0;
            }
        }
        else
        {
            impar[ci] = x;
            ci++;
            if (ci == 5)
            {
                for (int j = 0; j < 5; j++)
                {
                    printf("impar[%d] = %d\n", j, impar[j]);
                }
                ci = 0;
            }
        }
    }

    for (int j = 0; j < ci; j++)
    {
        printf("impar[%d] = %d\n", j, impar[j]);
    }

    for (int j = 0; j < cp; j++)
    {
        printf("par[%d] = %d\n", j, par[j]);
    }

    return 0;
}
