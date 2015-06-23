#include <stdio.h>

int main(){
	int matriz[3][3];
	int i=0,j=0,k=0;
	int n;
	int vector[3];
	printf("Ingrese su matriz en orden lineal\n");
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			scanf("%d" ,&matriz[i][j]);
		}
	}
		for(i=0; i<3; i++){
			for(j=0; j<3; j++){
				if(i==j){
					  vector[k]=matriz[i][j];
					  printf("%d" ,vector[k]);
				}
			}
		}
	
return 0;
}
