#include <stdio.h>

int main()
{
    int i_int;

    for (i_int = 0; i_int <= 20; i_int += 2)
    {
        float i = i_int / 10.0;

        for (int j = 1; j <= 3; j++)
        {
            float j_val = j + i;

            if (i_int % 10 == 0)
            { // i is 0.0, 1.0, or 2.0
                printf("I=%.0f J=%.0f\n", i, j_val);
            }
            else
            {
                printf("I=%.1f J=%.1f\n", i, j_val);
            }
        }
    }

    return 0;
}