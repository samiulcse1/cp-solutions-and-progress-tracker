#include <stdio.h>
int main()
{
    int x, count = 0;
    scanf("%d", &x);

    for (int i = 1;; i++)
    {
        if (x % 2 != 0)
        {
            printf("%d\n", x);
            count++;
        }
        x++;

        if (count == 6)
            break;
    }
    return 0;
}
