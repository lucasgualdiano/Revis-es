#include <stdio.h>
#include <stdlib.h>

void main(){
	int x=1;
	float v=0, t=0, m=0;
	
	do{
		printf("\nInforme o valor do %d* produto: ",x);
		scanf("%f",&v);
		fflush(stdin);
		t+=v;
		x++;
	}while(x<6);
	m=t/5;
	printf("\nValor medio dos produtos: R$%.2f",m);
	getchar();
}