#include <stdio.h>

void check(char ch)
{
	switch (ch){
	case 'a':
		printf("A");

	case 'b':
		printf("B");
		break;

	case 'c':
		printf("C");

	default:
		printf("D");
	}
	printf("\n");
}

int main(){

check('a');
check('c');
check('z');

return 0;
}
