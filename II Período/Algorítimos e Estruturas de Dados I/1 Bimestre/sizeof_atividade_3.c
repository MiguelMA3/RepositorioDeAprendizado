#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
	
	char nome[15], sexo;
	int idade, codigoproduto;
	float peso;
	
	setlocale(LC_ALL, "Portuguese");
	
	fflush(stdin);
	printf("\nInsira um Nome: ");	
	scanf("%s", &nome);
	
	fflush(stdin);
	printf("\nInsira o Sexo M ou F: ");	
	scanf("%c", &sexo);
	
	fflush(stdin);
	printf("\nInsira a Idade: ");	
	scanf("%d", &idade);
	
	fflush(stdin);
	printf("\nInsira o Peso: ");	
	scanf("%.2f", &peso);
	
	fflush(stdin);
	printf("\nInsira o Código do Produto: ");	
	scanf("%d", &codigoproduto);
	
	system("cls");
	printf("\nO NOME: %s ", nome);
	printf("ocupa %d Bytes", sizeof(nome));
	
	printf("\nO SEXO: %c ", sexo);
	printf("ocupa %d Bytes", sizeof(sexo));
	
	printf("\nA IDADE: %d ", idade);
	printf("ocupa %d Bytes", sizeof(idade));
	
	printf("\nO PESO: %f ", peso);
	printf("ocupa %d Bytes", sizeof(peso));
	
	printf("\nO CÓDIGO DO PRODUTO: %d ", codigoproduto);
	printf("ocupa %d Bytes", sizeof(codigoproduto));
	
}
