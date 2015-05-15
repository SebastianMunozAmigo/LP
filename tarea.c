#include <stdio.h>

#define M 10
#define D 8
#define Y -1

int main (){

int a=1, b=1;
int resultado=0;

resultado=((a+b-++a+--b)*M-D*a)/Y;
printf("%d\n",resultado);


return 0;
}
