#include <stdio.h>
#include <stdlib.h>

void main(){
	int x, o=0;
	float p=0, v=0, f=0;
	
	for(x=1;x<=8;x++){
		printf("\nInforme o valor do %i* produto: ",x);
		scanf("%f",&p);
		fflush(stdin);
		v+=p;
	}
	printf("\nFormas de pagamento:");
	printf("\n1 - 5x com 15%% de juros");
	printf("\n2 - 12x com 22%% de juros");
	printf("\nInforme a forma de pagamento: ");
	scanf("%d",&o);
	
	switch(o){
		case 1:
			f = (v*1.15)/5;
			break;
		case 2:
			f = (v*1.22)/12;
			break;
		default:
			f = v;
			printf("\nOpcao de pagamento invalida");
			break;
	}
	printf("\nValor a pagar: R$%.2f",f);
	getchar();
}