#include <stdio.h>
#define N 15

int main(){
	int i,j,k,l,nLetras,palindromo,n,usada,nImpar;
	char array1[N];
	int array2[N];
	nImpar=0;
	palindromo=1;
	nLetras=1;
	i=0;
	j=0;
	k=0;
	l=0;
	usada=0;
	for(i=0;i<N;i++){
		array2[i]=0;
	}
	scanf("%s",&array1);
	while(array1[nLetras]!='\0'){
		nLetras=(nLetras+1);
	}
	for(j=0;j<nLetras;j++){
		if(j!=0){
			if(array2[j]==1){
				usada=1;
			}
		}
		if(usada==0){
			n=1;
			for(l=0;l<nLetras;l++){
				if(array1[j]==array1[l] && j!=l){
					n=n+1;
					array2[j]=1;
					array2[l]=1;
				}
			}
			if((n%2)!=0){
				if(nImpar!=0){
					palindromo=0;
				}
				else{
					nImpar=1;
				}
			}
		}
		usada=0;
	}
	printf("%d\n",palindromo );
}
