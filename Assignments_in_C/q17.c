#include <stdio.h>

int factorial_while(int n)
{
    int i = 1, j = 1;

    while (i <= n)
    {
        j *= i;
        i++;
    }

    return j;
}

int factorial_do_while(int n)
{
    int i = 1, j = 1;

    do
    {
        j *= i;
        i++;
    }
    while (i <= n);

    return j;
}

int main()
{
    int n=4;


    printf("While: %d\n", factorial_while(n));
    printf("Do-while: %d\n", factorial_do_while(n));

    return 0;
}
