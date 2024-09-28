#include <stdio.h>
#include <stdlib.h>

void main(){
	int x=1;
	float cl=0, ca=0, ct=0, t=0, m=0;
	float ta=0, tl=0, tt=0, ma=0, ml=0, mt=0;
	
	while(x<=5){
		printf("\nValor %i* conta de luz:",x);
		scanf("%f",&cl);
		fflush(stdin);
		printf("\nValor %i* conta de agua:",x);
		scanf("%f",&ca);
		fflush(stdin);
		printf("\nValor %i* conta de telefone:",x);
		scanf("%f",&ct);
		fflush(stdin);
		ta+=ca;
		tl+=cl;
		tt+=ct;
		x++;
	}
	ma=ta/5;
	ml=tl/5;
	mt=tt/5;
	printf("\nTotal das contas de agua: R$%.2f",ta);
	printf("\nMedia das contas de agua: R$%.2f",ma);
	printf("\nTotal das contas de luz: R$%.2f",tl);
	printf("\nMedia das contas de luz: R$%.2f",ml);
	printf("\nTotal das contas de telefone: R$%.2f",tt);
	printf("\nMedia das contas de telefone: R$%.2f",mt);
	getchar();
}