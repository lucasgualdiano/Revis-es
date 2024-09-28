#include <stdio.h>
#include <stdlib.h>

void main(){
	int x, a=0, n1=0, n2=0, n3=0, n4=0;

	printf("\nDigite:");
	printf("\n1 - 1CC");
	printf("\n2 - 2CC");
	printf("\n3 - 3CC");
	printf("\n4 - 4CC");

	for(x=1; x<=15; x++){
		printf("\nQual o seu ano letivo:");
		scanf("%d",&a);
		fflush(stdin);
		switch(a){
			case 1:
				n1++;
				break;
			case 2:
				n2++;
				break;
			case 3:
				n3++;
				break;
			case 4:
				n4++;
				break;
		    default:
		    	printf("\nOpcao invalida");
		    	break;
		}
	}
	printf("\nAlunos no 1*ano: %i",n1);
	printf("\nAlunos no 2*ano: %i",n2);
	printf("\nAlunos no 3*ano: %i",n3);
	printf("\nAlunos no 4*ano: %i",n4);
	getchar();
}