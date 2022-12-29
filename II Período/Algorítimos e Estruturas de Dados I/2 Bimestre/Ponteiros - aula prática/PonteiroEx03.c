/* Objetivo do Programa: Alterar valores de ponteiros em C
Nome do Programa.......: PonteiroEx03.c
*/

#include<stdio.h>
#include <locale.h>

void main()
{
	int idade = 20;
	int *ponteiro_para_idade;
	ponteiro_para_idade = &idade;
	
	setlocale(LC_ALL, "portuguese");
	system("cls");
	printf("USO DE PONTEIROS\n");
	printf("--- -- ---------");
	printf("\n\n""");
	
	printf("CONTEÚDO da variável idade é: %d - Por meio de ponteiro\n", *ponteiro_para_idade);
	printf("CONTEÚDO da variável idade é: %d - Pela própria variável idade\n", idade);
	printf("ENDEREÇO de memória da variável idade é: %p - Por meio de ponteiro\n", ponteiro_para_idade);
	printf("ENDEREÇO de memória da variável idade é: %X - Por meio de ponteiro\n", ponteiro_para_idade);
	printf("ENDEREÇO de memória da variável idade é: %X - Pela própria variável idade\n", &idade);

	printf("\n\n");

	idade = 99;	// Novo valor para a variável
	printf("CONTEÚDO da variável idade é: %d - Por meio de ponteiro\n", *ponteiro_para_idade);
	printf("CONTEÚDO da variável idade é: %d - Pela própria variável idade\n", idade);
	printf("ENDEREÇO de memória da variável idade é: %p - Por meio de ponteiro\n", ponteiro_para_idade);
	printf("ENDEREÇO de memória da variável idade é: %X - Por meio de ponteiro\n", ponteiro_para_idade);
	printf("ENDEREÇO de memória da variável idade é: %X - Pela própria variável idade\n", &idade);	
}
