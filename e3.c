#include <stdio.h>

int main(){
	int matriz[3][3];
	int i,j;
	int det0=0, det1=0, det2=0, detFinal=0;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d" ,&matriz[i][j]);
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d" ,matriz[i][j]);
		}
	printf("\n");
	}
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			if(j==i){
				det0=det0+matriz[i][j];
			}
		}
	}

	det1=matriz[0][1]+matriz[1][2]+matriz[2][0];
	det2=matriz[0][2]+matriz[1][0]+matriz[2][1];
	detFinal=det0+det1+det2;
	printf("%d\n",detFinal);
return 0;
}
