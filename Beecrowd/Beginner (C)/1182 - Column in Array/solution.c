/*11.Your job in this problem is to read a number that is a column of an array where an operation will be performed, an uppercase character, indicating the operation to be performed and all elements of a bidimentional array M[12][12]. Then, you have to calculate and print the sum or average of all elements within the green area according to the case. The following figure illustrates the case when is entered the number 5 to the array column, showing all elements that must be considered in the operation.
 */
#include <stdio.h>
int main()
{
    double arr[12][12];
    double sum = 0.00, ssum = 0.00;
    int n, i, j, ii, jj, iii, jjj;
    scanf("%d", &n);
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
                if (jj == n)
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
                if (jjj == n)
                {
                    ssum += arr[iii][jjj];
                }
            }
        }
        double v = (ssum / 12.0);
        printf("%.1lf\n", v);
    }

    return 0;
}
