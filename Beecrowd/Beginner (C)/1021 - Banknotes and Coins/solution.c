#include <stdio.h>

int main()
{
    double N;
    scanf("%lf", &N);
    printf("NOTAS:\n");

    double banknotes[] = {100.00, 50.00, 20.00, 10.00, 5.00, 2.00};

    for (int k = 0; k < 6; k++)
    {
        int count = (N / banknotes[k]);
        printf("%d nota(s) de R$ %.2lf\n", count, banknotes[k]);
        N = N - (count * (banknotes[k]));
        N += 0.00001;
    }

    printf("MOEDAS:\n");

    double banknotes2[] = {1.00, 0.50, 0.25, 0.10, 0.05, 0.01};

    for (int h = 0; h < 6; h++)
    {
        int count1 = (N / banknotes2[h]);
        printf("%d moeda(s) de R$ %.2lf\n", count1, banknotes2[h]);
        N = (N - (count1 * banknotes2[h]));
        N += 0.00001;
    }

    return 0;
}
