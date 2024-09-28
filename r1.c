#include <stdio.h>
#include <stdlib.h>

void main(){
	int x;
	float v=0, vt=0, f=0;
	
	for(x=1;x<=5;x++){
		printf("\nInforme o valor da %d* conta de luz:", x);
		scanf("%f",&v);
		fflush(stdin);
		vt = vt + v;
		
	}
	
	f=vt*1.15;
	printf("Valor a pagar: R$%.2f",f);
	getchar();
}
