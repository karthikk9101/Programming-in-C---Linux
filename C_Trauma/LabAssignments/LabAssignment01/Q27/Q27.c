#include<stdio.h>

#define min(a,b) ((a)<(b) ? (a):(b))

int main(){
    int i=3,j=5;
    int m=min(i++,j++);
    printf("i=%d, j=%d, m=%d",i,j,m);
    return 0;
}