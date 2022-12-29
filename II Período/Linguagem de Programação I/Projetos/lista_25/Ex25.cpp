#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
	int tempo = 0;
	float taxaLigacao = 2.00;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("\nQuantos segundos durou a ligação? ");
	scanf("%d", &tempo);
	
	for (int i = 0; i <= tempo; i++) {
		if (i == 180) {
			taxaLigacao = taxaLigacao + 1.00;
		} else if (i > 180 && i % 300 == 0) {
			taxaLigacao = taxaLigacao + 1.5;
		} else if (i > 180 && i % 60 == 0) {
			taxaLigacao = taxaLigacao + 0.25;
		}
	}
	
	printf("\nA taxa foi de %.2f", taxaLigacao);

}
