#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int test, total_number = 0, Coelho = 0, Rato = 0, Sapo = 0;
    scanf("%d", &test);
    for (int k = 0; k < test; k++)
    {
        int num = 0;
        char type;
        scanf("%d %c", &num, &type);
        if (type == 'C')
        {
            Coelho += num;
            total_number += num;
        }
        else if (type == 'R')
        {
            Rato += num;
            total_number += num;
        }
        else if (type == 'S')
        {
            Sapo += num;
            total_number += num;
        }
    }
    printf("Total: %d cobaias\n", total_number);
    printf("Total de coelhos: %d\n", Coelho);
    printf("Total de ratos: %d\n", Rato);
    printf("Total de sapos: %d\n", Sapo);
    printf("Percentual de coelhos: %.2lf %%\n", 100.0 / ((double)total_number / (double)Coelho));
    printf("Percentual de ratos: %.2lf %%\n", 100.0 / ((double)total_number / (double)Rato));
    printf("Percentual de sapos: %.2lf %%\n", 100.0 / ((double)total_number / (double)Sapo));
    return 0;
}