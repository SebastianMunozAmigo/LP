//18.893.474-9
//Sebastian Muñoz Amigo
//Lenguaje de programacion
#include <stdio.h>
#include <math.h>
#define MAX 50

int main(){
	int P,N,*Arreglo,Array[MAX],suma1,suma2,vAbsoluto,aux,mDiferencia;
	int i,j;
	FILE *entrada,*salida;
	P=0;
	Arreglo=Array;//(Re)Iniciamos dirección (Ahora en adelante RD)//

	for(i=0;i<MAX;i++){ //Inicializo la matriz en 0 //
		*(Arreglo++)=0;
	}
	
	Arreglo=Array; //RD
	fscanf(entrada,"%d",&N);

	for(i=0;i<N;i++){//Ciclo para leer los digitos del arreglo;
		fscanf(entrada,"%d",Arreglo++);
	}

	for(i=0;i<(N-1);i++){
		Arreglo=&Array[i];
		suma1=0;
		suma2=0;
		for(j=i;j>=0;j--){
			aux=*Arreglo--;
			suma1=suma1+aux;
		}

		Arreglo=&Array[i+1];

		for(j=(i+1);j<=(N-1);j++){
			aux=*Arreglo++;
			suma2=suma2+aux;
		}
		vAbsoluto=abs((suma1-suma2));
		if(i==0){
			mDiferencia=vAbsoluto;
		}
		else{
			if(vAbsoluto<mDiferencia){
				mDiferencia=vAbsoluto;
			}
		}
	}
	fprintf(salida,"%d",mDiferencia );	
	return 0;
}

