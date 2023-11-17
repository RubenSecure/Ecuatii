#include <stdio.h>

int main(void)
{
    int n, z, p, c;

    scanf("%i", &n);
    z = 0;
    p = 1;

    while (n > 0)
    {
        c = n % 10;
        n = n / 10;
        if (c % 1 == 0)
        {
            z = z + p * (9 - c);
            p = p * 10;
        }
    }

    printf("%i", z);
}