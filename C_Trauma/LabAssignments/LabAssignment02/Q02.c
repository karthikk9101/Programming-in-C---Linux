#include <stdio.h>

int reverse(int n){
    int a=0;
    int digit;

    while(n>0){
        digit=n%10;
        a=a*10+digit;
        n=n/10;
    }
    return a;
}

int palindrome(int n){
    if (n==reverse(n)){
        return 1;}
    else{
        return 0;
    }
}

int main(){

    int x,rev;
    printf("Enter a positive number: ");
    scanf("%d",&x);

    rev = reverse(x);
    printf("Reversed number: %d\n",rev);

    if (palindrome(x)){
        printf("Positive palindrome.\n");
    }
    else{
        printf("Negative palindrome.\n");
    }
    return 0;
}