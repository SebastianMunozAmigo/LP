#include <stdio.h>
#define MAX 100
int main (){
	int vector[MAX];
	int vector2[MAX];
	int multVector[MAX];
	int i=0;
	int lVector;
	printf("Ingrese el largo de su vector\n");
	scanf("%d" ,&lVector);
	for(i=0;i<lVector; i++){
		vector[i]=0;
		vector2[i]=0;		
	}
	for(i=0;i<lVector;i++){
		printf("Ingrese el primero numero del primer vector en la posicion : %d \n",i);
		scanf("%d" ,&vector[i]);
	}
	for(i=0;i<lVector;i++){
		printf("Ingrese el primer numero del seguno vector en la posicion : %d\n",i);
		scanf("%d" ,&vector2[i]);
	}
	for(i=0;i<lVector;i++){
		multVector[i]=vector[i]*vector2[i];
	}
	for(i=0;i<lVector;i++){
		printf("%d" ,multVector[i]);
	}
return 0;
}
