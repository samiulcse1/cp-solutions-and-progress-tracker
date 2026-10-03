#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{

    int N, x, y;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {

        scanf("%d%d", &x, &y);

        int max, min, sum = 0;
        if (x > y)
        {
            max = x;
            min = y;
        }
        else
        {
            max = y;
            min = x;
        }
        for (int kk = min + 1; kk < max; kk++)
        {

            if ((kk % 2) != 0)
            {
                sum += kk;
            }
        }
        printf("%d\n", sum);
    }

    return 0;
}