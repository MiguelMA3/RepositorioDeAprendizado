#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	int cdgprod = 1, quant;
	float valunt, total = 0;
	
	
	setlocale(LC_ALL, "Portuguese");
	
	do {
		system("cls");
		
		printf("\nDigite o c�digo do produto: ");
		scanf("%d", &cdgprod);
		
		switch(cdgprod) {
			case 0:
				break;
			default:
				printf("\nDigite a quantidade: ");
				scanf("%d", &quant);
		
				printf("\nDigite o valor unit�rio: R$"); //usar v�rgula
				scanf("%f", &valunt);
				
				total = total + (valunt * quant);
				break;	
		}
			
	} while (cdgprod != 0);
	
	printf("\n\nTotal da compra: R$%.2f", total);
}
