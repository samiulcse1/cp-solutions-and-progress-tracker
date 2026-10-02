#include <stdio.h>

int main()
{

    int k;
    for (k = 1; k <= 100; k++)
    {
        if (k % 2 == 0)
        {
            printf("%d\n", k);
        }
    }

    return 0;
}
