#include <stdio.h>
int main()
{
    double x, y, z, a, b, c;
    scanf("%lf%lf%lf", &x, &y, &z);

    if (((x + y) > z) && ((y + z) > x) && ((x + z) > y))
    {
        if (x >= y && x >= z)
        {
            a = x;
            b = y;
            c = z;
        }
        else if (y >= x && y >= z)
        {
            a = y;
            b = x;
            c = z;
        }
        else
        {
            a = z;
            b = x;
            c = y;
        }

        if ((a * a) == ((b * b) + (c * c)))
        {
            printf("TRIANGULO RETANGULO\n");
        }
        else if ((a * a) > ((b * b) + (c * c)))
        {
            printf("TRIANGULO OBTUSANGULO\n");
        }
        else if ((a * a) < ((b * b) + (c * c)))
        {
            printf("TRIANGULO ACUTANGULO\n");
        }

        if (a == b && b == c)
        {
            printf("TRIANGULO EQUILATERO\n");
        }
        else if (a == b || b == c || c == a)
        {
            printf("TRIANGULO ISOSCELES\n");
        }
    }
    else
    {
        printf("NAO FORMA TRIANGULO\n");
    }

    return 0;
}
