#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d", &n);
    int array[n];
    for (int k = 0; k < n; k++)
    {
        int input;
        scanf("%d", &input);
        if (input == 0)
        {
            printf("NULL\n");
        }
        if (((input % 2) == 0) && (input < 0))
        {
            printf("EVEN NEGATIVE\n");
        }
        if (((input % 2) != 0) && (input < 0))
        {
            printf("ODD NEGATIVE\n");
        }
        if (((input % 2) == 0) && (input > 0))
        {
            printf("EVEN POSITIVE\n");
        }
        if (((input % 2) != 0) && (input > 0))
        {
            printf("ODD POSITIVE\n");
        }
    }
    return 0;
}