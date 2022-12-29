#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {
	int ano, diasmes, diasano;
	char mes[15];
	
	setlocale(LC_ALL, "Portuguese");
	
	fflush(stdin);
	printf("\nDigite o mês: ");
	scanf("%s", mes);
	
	fflush(stdin);
	printf("\nDigite o ano: ");
	scanf("%d", &ano);
	
	strupr(mes);
	
	if (ano % 4 == 0) {
		diasano = 366;
	} else {
		diasano = 365;
	}
	
	if (strcmp(mes, "NOVEMBRO") == 0 || strcmp(mes, "ABRIL") == 0 || strcmp(mes, "JUNHO") == 0 || strcmp(mes, "SETEMBRO") == 0) {
		diasmes = 30;
	} else if (strcmp(mes, "FEVEREIRO") == 0) {
		if (diasano == 366) {
			diasmes = 29;
		} else {
			diasmes = 28;
		}
	} else {
		diasmes = 31;
	}
	
	printf("\nO ano %d possui %d dias e o mês de %s desse mesmo ano possui %d dias", ano, diasano, mes, diasmes);
}
