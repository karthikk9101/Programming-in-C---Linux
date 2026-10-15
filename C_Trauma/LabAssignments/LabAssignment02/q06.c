#include <stdio.h>

int seclarg(int a[],int n){
    int lar,sec;
    int i;

    lar=a[0];
    sec=a[0];

    for (i=0;i<n;i++){
        if (a[i]>lar){
            lar=a[i];
        }

    }

    for (i=0;i<n;i++){
        if (a[i]<lar){
            if (sec==lar || a[i]>sec){
                sec=a[i];
            }
        }
    }

    if (sec==lar){
        return -1;
    }
    return sec;
}

int main(){

    int a[100];
    int n,result;

    printf("Enter number of elements: ");
    scanf("%d",&n);

    printf("Enter elements: \n");
    for (int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    result = seclarg(a,n);

    if (result==-1){
        printf("Invalid\n");
    }
    else{
        printf("Second largest number: %d\n",result);
    }
}

