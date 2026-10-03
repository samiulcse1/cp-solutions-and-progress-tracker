#include <stdio.h>
#include <stdlib.h>
int main()
{
    int A, B, C, x1, x2;
    scanf("%d%d%d", &A, &B, &C);
    x1 = ((A + B + abs(A - B)) / 2);
    x2 = ((x1 + C + abs(x1 - C)) / 2);
    printf("%d eh o maior\n", x2);
    return 0;
}
