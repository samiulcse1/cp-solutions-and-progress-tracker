#include <stdio.h>
#include <string.h>
int main()
{
    int i, num1, num2, min, max, sum = 0;
    scanf("%d%d", &num1, &num2);
    if (num1 == num2)
    {
        printf("0\n");
        return 0;
    }
    else if (num1 > num2)
    {
        min = num2;
        max = num1;
    }
    else
    {
        min = num1;
        max = num2;
    }
    for (i = min + 1; i < max; i++)
    {
        if ((i % 2) != 0)
        {
            sum += i;
        }
    }
    printf("%d\n", sum);

    return 0;
}
