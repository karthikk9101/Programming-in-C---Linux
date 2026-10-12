/*#include <stdio.h>

//count digits
int countdigits(int n){
    int count=0;

    while (n>0){
        count=count+1;
        n=n/10;
    }

    return count;
}

//sum of digits
int sumofdigits(int n){

    int buffer=0;
    int a=0;
    while (n>0){
        a=n%10;
        buffer=buffer+a;
        n=n/10;
    }
    return buffer;
}

//product
int product(int n){
    int buffer=1;
    int b=0;
    while (n>0){
        b=n%10;
        buffer=buffer*b;
        n=n/10;
    }
    return buffer;
}

//largest digit
int largest(int n){
    int buf=0;
    int digit;
    while (n>0){
        digit=n%10;
        if (digit>buf){
            buf = digit;
        }
        n=n/10;
    }
    return buf;
}

//smallest digit
int smallest(int n){
    int buf=9;
    int digit;
    while (n>0){
        digit=n%10;
        if (digit<buf){
            buf = digit;
        }
        n=n/10;
    }
    return buf;
}

//main program
int main(){
    int n;
    printf("Enter digit: ");
    scanf("%d",&n);

    printf("Number of digits  : %d\n",countdigits(n));
    printf("Sum of digits     : %d\n",sumofdigits(n));
    printf("Product of digits : %d\n",product(n));
    printf("Largest of digits : %d\n",largest(n));
    printf("Smallest of digits: %d\n",smallest(n));
    return 0;

}*/

#include <stdio.h>

//count digits
int countdigits(int n){
    int count=0;

    while (n>0){
        count=count+1;
        n=n/10;
    }

    return count;
}

//sum of digits
int sumofdigits(int n){

    int buffer=0;
    int a=0;
    while (n>0){
        a=n%10;
        buffer=buffer+a;
    }
    return buffer;
}

//product
int product(int n){
    int buffer=1;
    int b=0;
    while (n>0){
        b=n%10;
        buffer=buffer*b;
    }
    return buffer;
}

//largest digit
int largest(int n){
    int buf=0;
    int digit;
    while (n>0){
        digit=n%10;
        if (digit>buf){
            buf = digit;
        }
        n=n/10;
    }
    return buf;
}

//smallest digit
int smallest(int n){
    int buf=0;
    int digit;
    while (n>0){
        digit=n%10;
        if (digit<buf){
            buf = digit;
        }
        n=n/10;
    }
    return buf;
}

//main program
int main(){
    int n;
    printf("Enter digit: ");
    scanf("%d",&n);

    printf("Number of digits  : %d\n",countdigits(n));
    printf("Sum of digits     : %d\n",sumofdigits(n));
    printf("Product of digits : %d\n",product(n));
    printf("Largest of digits : %d\n",largest(n));
    printf("Smallest of digits: %d\n",smallest(n));
    return 0;

}