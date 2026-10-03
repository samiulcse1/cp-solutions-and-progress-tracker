#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{

    int jj = 7;
    for (int k = 1; k <= 9; k += 2)
    {
        for (int i = 0; i < 3; i++)
        {
            printf("I=%d J=%d\n", k, jj--);
        }
        jj += 5;
    }

    return 0;
}