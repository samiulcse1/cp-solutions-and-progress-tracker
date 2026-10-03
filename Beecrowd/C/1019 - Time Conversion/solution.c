#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int N, a, b, c;
    scanf("%d", &N);
    a = ((N / 3600));
    b = ((N - (a * 3600)) / 60);
    c = ((N - ((a * 3600) + (b * 60))));
    printf("%d:%d:%d\n", a, b, c);

    return 0;
}
