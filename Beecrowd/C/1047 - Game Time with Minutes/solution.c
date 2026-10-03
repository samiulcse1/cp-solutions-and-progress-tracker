#include <stdio.h>

int main()
{
    int start_h, start_m, end_h, end_m;
    scanf("%d %d %d %d", &start_h, &start_m, &end_h, &end_m);

    int start_total = start_h * 60 + start_m;
    int end_total = end_h * 60 + end_m;

    int duration;
    if (end_total <= start_total)
    {
        duration = (24 * 60) - start_total + end_total;
    }
    else
    {
        duration = end_total - start_total;
    }

    int hours = duration / 60;
    int minutes = duration % 60;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hours, minutes);

    return 0;
}