#include <stdio.h>
int main()
{
    int n, p = 0;
    scanf("%d", &n);

    if (n >= 2 && n <= 50)
    {
        for (int i = 0; i < 1000; i++)
        {
            printf("N[%d] = %d\n", i, p);
            p++;
            if (p == n)
            {
                p = 0;
            }
        }
    }

    return 0;
}
