#include <stdio.h>
#define MAX 100

int main (){
	int i;
	char palabra[MAX];
	int contador=0;
	int p;
	printf("Ingrese su palabra\n");
	scanf("%s" ,&palabra);
	p=strlen(palabra);
	for(i=0; i<p; i++){
		if(palabra[i]!='a' && palabra[i]!='e' && palabra[i]!='i' && palabra[i]!='o' && palabra[i]!='u'){
			contador=contador+1;
		}
	}
printf("la cantidad de consonantes en su palabra es : %d\n",contador);
return 0;
}
