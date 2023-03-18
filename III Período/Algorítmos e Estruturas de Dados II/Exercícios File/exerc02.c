#include <stdio.h>
#include <locale.h>

typedef struct {
	char codigo[15];
	char descricao[45];
	int quantidade;
	float precounit;
	
} Produto;

void main () {
	int i;
	
	setlocale(LC_ALL, "Portuguese");
	FILE *arq = fopen("exerc01.txt", "w");
	
	if (arq == NULL) {
		exit(0);
	}
	
	Produto prod[10];
	
	for (i = 0; i < 10; i++) {
		strcpy(prod[i].codigo, "1010");
		strcpy(prod[i].descricao, "Sabonete");
		prod[i].quantidade = 28;
		prod[i].precounit = 2.86;
		
	}
	
	for (i = 0; i < 10; i++) {
		fprintf(arq, "%s %s %d %.2f\n", prod[i].codigo, prod[i].descricao, prod[i].quantidade, prod[i].precounit);
	};
	
	printf("\nCheque o arquivo na pasta atual.");
	fclose(arq);
}
