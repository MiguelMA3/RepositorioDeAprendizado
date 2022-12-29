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
	
	printf("CONTE�DO da vari�vel idade �: %d - Por meio de ponteiro\n", *ponteiro_para_idade);
	printf("CONTE�DO da vari�vel idade �: %d - Pela pr�pria vari�vel idade\n", idade);
	printf("ENDERE�O de mem�ria da vari�vel idade �: %p - Por meio de ponteiro\n", ponteiro_para_idade);
	printf("ENDERE�O de mem�ria da vari�vel idade �: %X - Por meio de ponteiro\n", ponteiro_para_idade);
	printf("ENDERE�O de mem�ria da vari�vel idade �: %X - Pela pr�pria vari�vel idade\n", &idade);

	printf("\n\n");

	idade = 99;	// Novo valor para a vari�vel
	printf("CONTE�DO da vari�vel idade �: %d - Por meio de ponteiro\n", *ponteiro_para_idade);
	printf("CONTE�DO da vari�vel idade �: %d - Pela pr�pria vari�vel idade\n", idade);
	printf("ENDERE�O de mem�ria da vari�vel idade �: %p - Por meio de ponteiro\n", ponteiro_para_idade);
	printf("ENDERE�O de mem�ria da vari�vel idade �: %X - Por meio de ponteiro\n", ponteiro_para_idade);
	printf("ENDERE�O de mem�ria da vari�vel idade �: %X - Pela pr�pria vari�vel idade\n", &idade);	
}
