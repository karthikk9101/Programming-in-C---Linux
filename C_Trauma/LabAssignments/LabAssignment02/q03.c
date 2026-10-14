#include <stdio.h>

int count(int n){
    int buffer=0;

    if (n==0){
        return 1;
    }
    while (n>0){
        buffer++;
        n=n/10;
    }
    return buffer;
}

int power(int n,int exp){
    int res=1;
    while (exp>0){
        res=res*n;
        exp=exp-1;
    }
    return res;
}

int isarm(int n)
{
    int original = n;
    int digit, sum = 0;
    int digits = count(n);

    while (n > 0)
    {
        digit = n % 10;
        sum = sum + power(digit, digits);
        n = n / 10;
    }

    return sum == original;
}

int main(){
    
    int l,h,i;

    printf("Enter lower limits: ");
    scanf("%d",&l);

    printf("Enter upper limit: ");
    scanf("%d",&h);

    printf("Armstrong numbers: \n");

    for (i = l; i <= h; i++)
    {
        if (isarm(i))
            printf("%d ", i);
    }

    printf("\n");

    return 0;
}