#include <stdio.h>
int main()
{
    double arr[12][12], sum = 0.00, ssum = 0.00;
    int i, j, ii, jj, iii, jjj;
    char ch;
    scanf(" %c", &ch);
    for (i = 0; i < 12; i++)
    {
        for (j = 0; j < 12; j++)
        {
            scanf("%lf", &arr[i][j]);
        }
    }
    if ((ch == 'S'))
    {
        for (ii = 0; ii < 12; ii++)
        {
            for (jj = 0; jj < 12; jj++)
            {
                if (((jj + ii) >= 12))
                {
                    sum += arr[ii][jj];
                }
            }
        }
        printf("%.1lf\n", sum);
    }
    else if ((ch == 'M'))
    {
        for (iii = 0; iii < 12; iii++)
        {
            for (jjj = 0; jjj < 12; jjj++)
            {
                if (((jjj + iii) >= 12))
                {
                    ssum += arr[iii][jjj];
                }
            }
        }
        double v = (ssum / 66.0);
        printf("%.1lf\n", v);
    }
    return 0;
}
