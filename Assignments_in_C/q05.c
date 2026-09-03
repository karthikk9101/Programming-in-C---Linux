#include <stdio.h>
int main(){

//sizeof(char)<sizeof(short)<=sizeof(int)<=sizeof(long)
//sizeof(char)<sizeof(short)<=sizeof(float)<=sizeof(double)

printf("%lu\n",sizeof(char));
printf("%lu\n",sizeof(short));
printf("%lu\n",sizeof(long));
printf("%lu\n",sizeof(char));
printf("%lu\n",sizeof(double));
printf("%lu\n",sizeof(float));
return 0;
}
