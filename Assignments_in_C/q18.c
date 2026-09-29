#include <stdio.h>

int main(){

	int y,z;
	y = 0;
	z = (y=5, y+2,y*3);
	printf("%d\n",z);
return 0;
}
