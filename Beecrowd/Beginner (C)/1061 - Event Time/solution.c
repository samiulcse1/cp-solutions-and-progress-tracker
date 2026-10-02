#include <stdio.h>

int main()
{
    int s_day, s_hours, s_min, s_seconds;
    int day, hours, min, seconds;
    long long t1, t2;

    scanf("Dia %d", &s_day);
    scanf("%d : %d : %d", &s_hours, &s_min, &s_seconds);
    scanf(" Dia %d", &day);
    scanf("%d : %d : %d", &hours, &min, &seconds);

    t1 = ((long long)s_day * 24 * 3600) + (s_hours * 3600) + (s_min * 60) + s_seconds;
    t2 = ((long long)day * 24 * 3600) + (hours * 3600) + (min * 60) + seconds;

    long long res = t2 - t1;

    long long d = res / (24 * 3600);
    long long remaining = res % (24 * 3600);
    long long h = remaining / 3600;
    remaining = remaining % 3600;
    long long m = remaining / 60;
    long long s = remaining % 60;

    printf("%lld dia(s)\n%lld hora(s)\n%lld minuto(s)\n%lld segundo(s)\n", d, h, m, s);
    return 0;
}