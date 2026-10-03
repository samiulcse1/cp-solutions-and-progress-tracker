#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int k, big = -1, position = 0;
    for (k = 1; k <= 100; k++)
    {
        int num;
        scanf("%d", &num);

        if (num > big)
        {
            big = num;
            position = k;
        }
    }
    printf("%d\n%d\n", big, position);
    return 0;
}