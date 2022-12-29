
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
	char nome[1200][55];
	int idade[1200], i;
	float salario[1200];
	
	setlocale(LC_ALL, "Portuguese");
	
	system("cls");
	
	for (i = 0; i < 1200; i++) {
		
		fflush(stdin);
		printf("\nDigite o %dº nome: ", i+1);
		gets(&nome[i]);
		
		fflush(stdin);
		printf("\nDigite a %dº idade: ", i+1);
		scanf("%d", &idade[i]);
		
		fflush(stdin);
		printf("\nDigite o %dº salário: ", i+1);
		scanf("%f", &salario[i]);
		
		system("cls");	
		
		printf("\n\n");
		
	}
	
for (i = 0; i < 1200; i++) {
		printf("\n\n--%dº Pessoa", i+1);
		printf("\nNome: %s", nome[i]);
		printf("\nIdade: %d", idade[i]);
		printf("\n Salario: %.2f", salario[i]);
	}
}
