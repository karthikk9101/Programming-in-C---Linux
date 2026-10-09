#include <stdio.h>

int main()
{
    int a = 10;
    int b = 25;
    int c = 45;

    int max = ((a > b) ?((a > c) ? a : c) : ((b > c) ? b : c));

    printf("Maximum = %d\n", max);

    return 0;
}