#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	int numDep;
	float salMin, salFunc, taxaImposto, impostoBruto, valDep;
	
	setlocale(LC_ALL, "Portuguese");
	
	fflush(stdin);
	printf("\nDigite o salário mínimo: ");
	scanf("%f", &salMin);
	fflush(stdin);
	printf("\nDigite o salário do funcionário: ");
	scanf("%f", &salFunc);
	fflush(stdin);
	printf("\nDigite o número de dependentes: ");
	scanf("%d", &numDep);
	fflush(stdin);
	printf("\nDigite o imnposto pago pelo funcionário: ");
	scanf("%f", &taxaImposto);
	
	valDep = numDep * 300;
	
	if (salFunc % 12 > salMin) {
		impostoBruto = salFunc * 0.2;
	} else if (salFunc % 5 > salMin) {
		impostoBruto = salFunc * 0.08;
	} else {
		impostoBruto = 0;
	}
}
