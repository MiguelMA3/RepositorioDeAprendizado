/* Objetivo do Programa: Exemplo de como declarar variaveis ponteiro
Nome do Programa.......: PonteiroEx01.c
*/

#include<stdio.h>
#include <locale.h>

void main()
{
	int idade = 25;
	int *var_ponteiro1;		// sintaxe1
  	int* var_ponteiro2;		// sintaxe2 
  	int * var_ponteiro3;	// sintaxe3

	setlocale(LC_ALL, "portuguese");
	system("cls");

	printf("USO DE PONTEIROS\n");
	printf("--- -- ---------");
	printf("\n\n""");
  	
	// um ponteiro s� serve se estiver armazenando algum ENDERE�O
	printf("ENDERE�O do ponteiro var_ponteiro1 ? %X - At� um ponteiro possui um ENDERE�O na mem�ria\n", &var_ponteiro1);
	printf("ENDERE�O do ponteiro var_ponteiro2 ? %X - At� um ponteiro possui um ENDERE�O na mem�ria\n", &var_ponteiro2);
	printf("ENDERE�O do ponteiro var_ponteiro3 ? %X - At� um ponteiro possui um ENDERE�O na mem�ria\n", &var_ponteiro3);
	
  	printf("\n\n");
  	
  	var_ponteiro1 = idade;  // N�o n�o � o ideal
  	var_ponteiro2 = &idade; // Essa � a fun��o de um ponteiro, receber o ENDERE�O de algo
  
  	printf("CONTE�DO da vari�vel idade �: %d\t Usando ponteiro para isso\n", *var_ponteiro2);
	printf("CONTE�DO da vari�vel idade �: %d\t Usando a pr�pria vari�vel idade\n", idade);
  	
	printf("\n\n");
	
	printf("ENDERE�O de mem�ria da vari�vel idade �: %X - Usando ponteiro para isso\n", var_ponteiro2);
	printf("ENDERE�O de mem�ria da vari�vel idade �: %X - Usando a pr�pria vari�vel idade\n", &idade);
}

