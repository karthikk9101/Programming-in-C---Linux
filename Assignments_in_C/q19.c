#include <stdio.h>

#define min(a,b) ((a) < (b) ? (a) : (b))

int gcd(int a, int b)
{
    int i;
    int ret = 1;
    int minval = min(a,b);

    for (i = 2; i <= minval; i++)
    {
        if (a % i)
            continue;

        if (b % i == 0)
            ret = i;
    }

    return ret;
}

int main()
{
    int a = 12, b = 18;

    printf("GCD = %d\n", gcd(a,b));

    return 0;
}
