#include <stdio.h>
int main()
{
    int n, in = 0, out = 0;
    scanf("%d", &n);
    int array[n];
    for (int k = 0; k < n; k++)
    {
        scanf("%d", &array[k]);
        if ((array[k] >= 10) && (array[k] <= 20))
        {
            in++;
        }
        else
        {
            out++;
        }
    }
    printf("%d in\n%d out\n", in, out);
    return 0;
}