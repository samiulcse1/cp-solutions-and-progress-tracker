#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);

    int arr[x];
    for (int i = 1; i <= x; i++)
    {

        if (i % 2 != 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
