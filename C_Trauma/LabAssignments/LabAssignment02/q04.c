#include <stdio.h>

int main(){
    int n,i;
    int num=1;
    printf("Enter rows: ");
    scanf("%d",&n);

    for (i=0;i<=n;i++){
        for (int j=0;j<=i;j++){
            printf("%d ",num);
            num=num+1;
        }
        printf("\n");
    }
    return 0;
}