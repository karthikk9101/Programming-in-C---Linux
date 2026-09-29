#include <stdio.h>
//A
void a()
{
printf("a.");
int x=1;
char *p=(char *)&x;
if (*p==1)
	printf("Little Endian\n");
else
	printf("Big Edian\n");
}
//B
void b()
{
printf("b.\n");
unsigned int x=0x0A0B0C0D;
unsigned char *p = (unsigned char *)&x;
int i=0;
for (i=0;i<4;i++)
{
printf("%02X\n",p[i]);
}
}
//C
void c(){
printf("c.\n");
char msg[]="NUXI";
for(int i=0;i<4;i++)
{
printf("%c\n",msg[i]);
}
}
int main(){
a();
b();
c();

return 0;
}
