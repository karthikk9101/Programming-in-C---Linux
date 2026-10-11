#include <stdio.h>
#include "mymod.h"

#if DEBUG == 1
#define DEBUG_MESSAGE "Debug mode"
#endif

int add(int a,int b)
{
    return a+b;
}

int main(void)
{
#if DEBUG == 1
    printf("Debug mode\n");
#endif

    printf("Ador\n");
    printf("2 + 3 = %d\n",add(2,3));

    return 0;
}