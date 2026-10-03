#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d", &n);

    for (int k = 0; k < n; k++)

    {
        double arr[3], sum;

        for (int i = 0; i < 3; i++)
        {
            scanf("%lf", &arr[i]);
            sum += arr[i];
        }
        sum = ((2 * arr[0]) + (3 * arr[1]) + (5 * arr[2]));
        double avg = sum / (2.0 + 3.0 + 5.0);
        printf("%.1lf\n", avg);
    }
    return 0;
}