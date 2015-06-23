#include <stdio.h>

#define MAX 100

int main (){
	int vector1[MAX];
	int vector2[MAX];
	int tVector;
	int sumaVector[MAX];
	int i=0;
	for(i=0; i<MAX; i++)
	{
		vector1[i]=0;
		vector2[i]=0;
	}
	printf("Cual es el largo de su arreglo\n");
	scanf("%d",&tVector);
	for(i=0; i<tVector; i++){
		printf("Ingrese la posicion : %d\n" ,i);
		scanf("%d",&vector1[i]);
	}
	for(i=0; i<tVector; i++){
		printf("Ingrese la posicion : %d\n" ,i);
		scanf("%d",&vector2[i]);
	}
 	for(i=0; i<tVector; i++){
		sumaVector[i]=vector1[i]+vector2[i];
		printf("en la posicion %d la suma de sus vectores es %d\n" ,i ,sumaVector[i]);
	}
	for(i=0;i<tVector;i++){
		printf("%d-",sumaVector[i]);
	}


return 0;
}
