#include <stdio.h>
int main()
{
    double arr[6], sum = 0.0;
    int count = 0;
    for (int i = 0; i < 6; i++)
    {
        scanf("%lf", &arr[i]);

        if (arr[i] >= 0)
        {
            count++;
            sum += arr[i];
        }
    }
    printf("%d valores positivos\n%.1lf\n", count, (sum / count));
    return 0;
}
