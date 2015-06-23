#include <stdio.h>
#define MAX 5

int main(){
	int i=0;
	int *puntero;
	int arreglo[MAX]={1,2,3,4,5};

	puntero=&arreglo[0];
	for(i=0;i<MAX;i++){
		printf("%d\n" ,(puntero++));
	}
	printf("\n");
return 0;
}
