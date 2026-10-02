#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int jj = 60;

    for (int k = 1; jj >= 0; k += 3)
    {

        printf("I=%d J=%d\n", k, jj);
        jj -= 5;
    }

    return 0;
}