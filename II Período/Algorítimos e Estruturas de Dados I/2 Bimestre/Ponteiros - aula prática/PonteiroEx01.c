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
  	
	// um ponteiro só serve se estiver armazenando algum ENDEREÇO
	printf("ENDEREÇO do ponteiro var_ponteiro1 ? %X - Até um ponteiro possui um ENDEREÇO na memória\n", &var_ponteiro1);
	printf("ENDEREÇO do ponteiro var_ponteiro2 ? %X - Até um ponteiro possui um ENDEREÇO na memória\n", &var_ponteiro2);
	printf("ENDEREÇO do ponteiro var_ponteiro3 ? %X - Até um ponteiro possui um ENDEREÇO na memória\n", &var_ponteiro3);
	
  	printf("\n\n");
  	
  	var_ponteiro1 = idade;  // Não não é o ideal
  	var_ponteiro2 = &idade; // Essa é a função de um ponteiro, receber o ENDEREÇO de algo
  
  	printf("CONTEÚDO da variável idade é: %d\t Usando ponteiro para isso\n", *var_ponteiro2);
	printf("CONTEÚDO da variável idade é: %d\t Usando a própria variável idade\n", idade);
  	
	printf("\n\n");
	
	printf("ENDEREÇO de memória da variável idade é: %X - Usando ponteiro para isso\n", var_ponteiro2);
	printf("ENDEREÇO de memória da variável idade é: %X - Usando a própria variável idade\n", &idade);
}

