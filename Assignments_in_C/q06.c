#include <stdio.h>

int main(){

int a=1;
char *p=(char *)&a;
if (*p==1)
	printf("Little Endian\n");
else
	printf("Big Endian\n");
return 0;
}
