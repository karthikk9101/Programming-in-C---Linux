#include <stdio.h>
#include "euclid.h"

int main()
{
    int a=30;
    int b=12;

    ext_euclid(a,b,&gcd_result,&x_result,&y_result);

    printf("GCD = %d\n",gcd_result);
    printf("x = %d\n",x_result);
    printf("y = %d\n",y_result);

    printf("%d(%d) + %d(%d) = %d\n",
           a,x_result,b,y_result,gcd_result);

    return 0;
}