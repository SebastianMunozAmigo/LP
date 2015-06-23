#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
	int dInicial, vControl, i,dApuesta, dGanado, dAgregar, n;
	int ruleta[3];
	int gana;
	srand(time(NULL));
	printf("Bienvenido al tragamonedas, cuanto monto desea ingresar?");
	scanf("%d" ,&dInicial);
	while(dInicial<0){
		printf("El monto ingresado no es valido\n");
		scanf("%d" ,&dInicial);
	}
	vControl=6;
	while(vControl!=0){
		printf("Que desea hacer:\n0)Salir\n1)Jugar\n2)Agregar dinero\n");
		scanf("%d" ,&vControl);	
		while(vControl<0 || vControl>2){
			printf("La opcion ingresada no es valida\n");
			scanf("%d" ,&vControl);
		}	
		if(vControl==1){
			printf("Cuanto va a apostar? Puede ser:\na)100\nb)300\nc)500\n");
			scanf("%d",&dApuesta);
			while(dApuesta!=100 && dApuesta!=300 && dApuesta!=500){
				printf("El monto ingresado no es valido\n");
				scanf("%d",&dApuesta);
			}
			for(i=0;i<3;i++){
				n=1+(rand()%99);
				printf("%d\n",n );
				if(n>0 && n<=10){
					ruleta[i]=3;
				}
				else{
					if(n>10 && n<=35){
						ruleta[i]=2;
					}
					else{
						if(n>35 && n<=55){
							ruleta[i]=1;
						}
						else{
							if(n>55 && n<=100){
								ruleta[i]=0;
							}
						}
					}
				}
			}
			printf("%d - %d - %d\n",ruleta[0], ruleta[1], ruleta[2] );
			if(ruleta[0]==3 && ruleta[1]==3 && ruleta[2]==3){
				gana=0;
				dGanado=dApuesta*20;
			}
			else{
				if(ruleta[0]==3 && ruleta[1]==3 || ruleta[0]==3 && ruleta[2]==3 || ruleta[1]==3 && ruleta[2]==3){
					gana=0;
					dGanado=dApuesta*7;
					printf("Entro 1\n");
				}
				else{
					if(ruleta[0]==2 && ruleta[1]==2 && ruleta[2]==2){
						gana=0;
						dGanado=dApuesta*5;
						printf("Entro 2\n");
					}
					else{
						if(ruleta[0]==2 && ruleta[1]==2 || ruleta[0]==2 && ruleta[2]==2 || ruleta[1]==2 && ruleta[2]==2){
							gana=0;
							dGanado=dApuesta*3;
							printf("Entro 3\n");
						}
						else {
							if(ruleta[0]==1 && ruleta[1]==1 && ruleta[2]==1){
								gana=0;
								dGanado=dApuesta*3;
								printf("Entro 4\n");
							}
							else{
								if(ruleta[0]==1 && ruleta[1]==1 || ruleta[0]==1 && ruleta[2]==1 || ruleta[1]==1 && ruleta[2]==1){
								gana=0;
								dGanado=dApuesta*2;
								printf("Entro 5\n");
								}
								else{
									if(ruleta[0]==0 && ruleta[1]==0 && ruleta[2]==0){
 									gana=0;
 									dGanado=dApuesta*3;
 									printf("Entro 6\n");
									}
									else{
										if(ruleta[0]==0  &&	ruleta[1]==0 || ruleta[0]==0 && ruleta[2]==0 || ruleta[1]==0 && ruleta[2]==0){
											gana=0;
											dGanado=dApuesta*1;
											printf("Entro 7\n");
										}
										else{
											gana=1;
											printf("Entro 8\n");
										}
									}
								}
							}
						}
					}
				}
			}
			if(gana==0){
				dInicial=dInicial+dGanado;
				printf("Felicidades haz ganado la cantidad de :%d\n" ,dGanado);
				printf("Tu nuevo monto es igual a : %d\n",dInicial);
			}
			else{
				dInicial=dInicial-dApuesta;
				printf("Haz perdido :(\n");
				printf("tu nuevo monto es : %d\n",dInicial);
			}
		}
		else if(vControl==2){
		   	printf("Cuanto dinero desea agregar?");
		   	scanf("%d",&dAgregar);
		   	dInicial=dInicial+dAgregar;
		}
		else if(vControl==3){
			vControl=0;
		}
	}
	return 0;
}
