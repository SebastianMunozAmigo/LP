#include <stdio.h>
#define MAX 100
int main(){
	char palabra[MAX];
	int contador=0;
	int i=0, p;
	printf("Ingrese su palabra\n");
	scanf("%s" ,&palabra);
	p=strlen(palabra);
	for(i=0; i<p; i++){
		if(palabra[i]=='a' || palabra[i]=='e' || palabra[i]=='i' || palabra[i]=='o' ||palabra[i]=='u'){
			contador=contador+1;
		}
	}
	printf("la cantidad de vocales en su palabra son:  %d " ,contador);
return 0;
}
