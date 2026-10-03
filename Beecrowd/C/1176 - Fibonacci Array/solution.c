#include <stdio.h>
int main()
{
    int T;
    scanf("%d", &T);
    long long fb[61];
    fb[0] = 0, fb[1] = 1;
    for (int i = 2; i <= 60; i++)
    {
        fb[i] = fb[i - 1] + fb[i - 2];
    }
    for (int k = 0; k < T; k++)
    {
        int N;
        scanf("%d", &N);
        if (0 <= N && N <= 60)
        {
            printf("Fib(%d) = %lld\n", N, fb[N]);
        }
    }

    return 0;
}
