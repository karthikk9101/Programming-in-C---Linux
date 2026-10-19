#include <stdio.h>

//Maximum value
int max(int a[],int n){
    int max=a[0];
    int i;

    for (i=1;i<n;i++){
        if (a[i]>max){
            max=a[i];
        }
    }
    return max;
}

//Minimum value
int minimum(int a[],int n){
    int min=a[0];
    int i;

    for (i=1;i<n;i++){
        if (a[i]<min){
            min=a[i];
        }
    }
    return min;
}

//Sum
int summ(int a[],int n){

    int sum=0;
    int i;

    for (i=0;i<n;i++){

        sum = sum + a[i];

    }
    return sum;

}

//Average
float avg(int a[],int n){
    float average = summ(a,n)/n;
    return average;
}

//Number of even elements
int evencount(int a[],int n){

    int flag=0;
    for (int i=0;i<n;i++){
        if (a[i]%2==0){
            flag++;
        }
    }
    return flag;
}

//Number of odd elements
int oddcount(int a[],int n){

    int flag=0;
    for (int i=0;i<n;i++){
        if (a[i]%2!=0){
            flag++;
        }
    }
    return flag;
}

int main(){

    int n;
    int a[100];
    printf("Enter number of entries: ");
    scanf("%d",&n);
    printf("Enter entries:\n");
    for (int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    //printing elements
    printf("Maximum value   : %d\n",max(a,n));
    printf("Minimum value   : %d\n",minimum(a,n));
    printf("Sum             : %d\n",summ(a,n));
    printf("Average         : %0.2f\n",avg(a,n));
    printf("Odd count       : %d\n",oddcount(a,n));
    printf("Even count      : %d\n",evencount(a,n));

    return 0;
}