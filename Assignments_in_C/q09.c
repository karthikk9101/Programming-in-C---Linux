#include <stdio.h>

int main(){

int a = 5, b;
b = a++;
printf("%d %d\n",a, b);

int c = 5, d;
d = ++c;
printf("%d %d\n",c, d);
return 0;
}
