#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct {
	char codigo[15];
	char descricao[45];
	int quantidade;
	float precounit;
	
} Produto;

void main () {
	char code[15];
	char desc[45];
	int quant;
	float precoun;
	
	int i;
	
	setlocale(LC_ALL, "Portuguese");
	FILE *arq = fopen("exerc01.txt", "w");
	
	if (arq == NULL) {
		exit(0);
	}
	
	Produto prod[10];
	
	for (i = 0; i < 10; i++) {
		system("cls");
		
		fflush(stdin);
		printf("\nCódigo do Produto: ");
		gets(code);		
		fflush(stdin);
		printf("\nDescrição do Produto: ");
		gets(desc);		
		fflush(stdin);
		printf("\nQuantidade de Produtos: ");
		scanf("%d", &quant);		
		fflush(stdin);
		printf("\nPreço Unitário: ");
		scanf("%f", &precoun);		
		
		strcpy(prod[i].codigo, code);
		strcpy(prod[i].descricao, desc);
		prod[i].quantidade = quant;
		prod[i].precounit = precoun;
	}
	
	for (i = 0; i < 10; i++) {
		fprintf(arq, "%s %s %d %.2f\n", prod[i].codigo, prod[i].descricao, prod[i].quantidade, prod[i].precounit);
	};
	
	fclose(arq);
	arq = fopen("exerc01.txt", "r");
	
	char c;
	system("cls");
	printf("\nConteúdo do arquivo:\n\n");
	
	while (c != EOF)
    {
        printf ("%c", c);
        c = fgetc(arq);
    }
    
	fclose(arq);
}
