#include <stdio.h>
//##define SQR(x) x*x       FIRST DO THIS. 
#define SQR(x) ((x)*(x))

int main()
{
    int a=2,b=3;

    printf("%d\n",SQR(a+b));
    printf("%d\n",100/SQR(2));

    return 0;
}