#include <stdio.h>
int main()
{
    double a, b, c, d;
    scanf("%lf%lf%lf%lf", &a, &b, &c, &d);
    double avg = (((a * 2.0) + (b * 3.0) + (c * 4.0) + (d * 1.0)) / (2.0 + 3.0 + 4.0 + 1.0));
    if (avg >= 5.0 && avg < 6.9)
    {
        double x;
        scanf("%lf", &x);
        printf("Media: %.1lf\nAluno em exame.\nNota do exame: %.1lf\n", avg, x);
        double y = ((avg + x) / 2.0);
        if (y >= 5.0)
        {
            printf("Aluno aprovado.\n");
            printf("Media final: %.1lf\n", y);
        }
        else if (y <= 4.9)
        {
            printf("Aluno reprovado.\n");
            printf("Media final: %.1lf\n", y);
        }
    }
    else if (avg < 5.0)
    {
        printf("Media: %.1lf\nAluno reprovado.\n", avg);
    }

    else if (avg >= 7.0)
    {
        printf("Media: %.1lf\nAluno aprovado.\n", avg);
    }
    return 0;
}
