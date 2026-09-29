#include "euclid.h"

int gcd_result;
int x_result;
int y_result;

void ext_euclid(int a, int b, int *gcd, int *x, int *y)
{
    int old_r=a;
    int r=b;

    int old_x=1;
    int x1=0;

    int old_y=0;
    int y1=1;

    while(r!=0)
    {
        int q=old_r/r;
        int temp;

        temp=r;
        r=old_r-q*r;
        old_r=temp;

        temp=x1;
        x1=old_x-q*x1;
        old_x=temp;

        temp=y1;
        y1=old_y-q*y1;
        old_y=temp;
    }

    *gcd=old_r;
    *x=old_x;
    *y=old_y;
}