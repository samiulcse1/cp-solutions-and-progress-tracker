#include <stdio.h>

int main()
{
    double in;
    scanf("%lf", &in);
    if ((in >= 0.00) && (in <= 25.00))
    {
        printf("Intervalo [0,25]\n");
    }
    else if ((in >= 25.00) && (in <= 50.00))
    {
        if ((in > 25.00))
        {
            printf("Intervalo (25,50]\n");
        }
        else
        {
            printf("Intervalo [25,50]\n");
        }
    }
    else if ((in >= 50.00) && (in <= 75.00))
    {
        if ((in > 50.00))
        {
            printf("Intervalo (50,75]\n");
        }
        else
        {
            printf("Intervalo [50,75]\n");
        }
    }
    else if ((in >= 75.00) && (in <= 100.00))
    {
        if ((in > 75.00))
        {
            printf("Intervalo (75,100]\n");
        }
        else
        {
            printf("Intervalo [75,100]\n");
        }
    }
    else
    {
        printf("Fora de intervalo\n");
    }
    return 0;
}
