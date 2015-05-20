#include <stdio.h>

int main(){
	int i=0;
	int d1=0 ,d2=0 ,d3=0 ,d4=0 ,d5=0 ,d6=0 ,d7=0 ,d8=0;
	char dv;
	int n;
	int run=0;
	int suma=0;
	int codigo=0;
	char K, k;
	printf("Ingrese su rut sin puntos ni codigo verificador\n");
	scanf("%d" ,&run);
	printf("Ingrese el codigo verificador\n");
	scanf("%d" ,&dv);
	if(dv==K || dv==k){
		n=10;
		if (dv==0){
			n=11;
		}
			if (dv>=1 && dv<=9){
				n=dv;
			}
	}
	else 
		dv==dv;
	while(i==0){
		d8=(run%10);
		run=run/10;
		d7=(run%10);
		run=run/10;
		d6=(run%10);
		run=run/10;
		d5=(run%10);
		run=run/10;
		d4=(run%10);
		run=run/10;
		d3=(run%10);
		run=run/10;
		d2=(run%10);
		run=run/10;
		d1=(run%10);
		suma=((d1*2)+(d2*3)+(d3*4)+(d4*5)+(d5*6)+(d6*7)+(d7*2)+(d8*3));
		codigo=11-(suma%11);
		printf("%d\n" "%c\n" ,suma ,dv ,);
		if (codigo==n || codigo==n){
			printf("el rut es correcto\n");
		}
		     if(codigo<=n){
			printf("el rut es correcto\n");
			}
			else{
					printf("el rut es incorrecto\n");
			}
	i=1;
    }
 return 0;
}
