#include <stdio.h>
#include <stdlib.h>

void main(){
	int x=0, n=0, soma=0;
	
	printf("\nDigite 0 para interromper o programa");
	do{
		printf("\nInforme o numero: ");
		scanf("%i",&n);
		fflush(stdin);
		if(n>0){
			soma=soma+n;
		}
		else{
			x=1;
		}
	}
	while(x==0);
	printf("\nSoma dos numeros: %i",soma);
	getchar();
}