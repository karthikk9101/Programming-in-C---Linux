#include <stdio.h>

int main(){

float x=2.0;
float y=6.0;

float z1=x+3*x/(y-4);
printf("%f\n",z1);
z1 = (x+3*x)/(y-4);
printf("%f\n",z1);
return 0;
}
