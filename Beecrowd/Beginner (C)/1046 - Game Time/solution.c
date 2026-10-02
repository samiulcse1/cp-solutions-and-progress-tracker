#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    if (a == b)
    {
        printf("O JOGO DUROU 24 HORA(S)\n");
    }
    else
    {
        int formula = ((24 - a) + b);
        printf("O JOGO DUROU %d HORA(S)\n", formula % 24);
    }
    return 0;
}
