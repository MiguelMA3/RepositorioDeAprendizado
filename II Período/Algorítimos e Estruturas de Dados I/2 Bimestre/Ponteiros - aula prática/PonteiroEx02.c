/* Objetivo do Programa: Exemplo básico do uso de ponteiros em C
Nome do Programa.......: PonteiroEx02.c
*/

#include <stdio.h>
#include <locale.h>

void MostraResultado()
{
	int idade = 25;
  	int *var_ponteiro; 
	/* outras maneira de declarar uma variável ponteiro:
	int* var_ponteiro; 
	int * var_ponteiro;
	*/
  
  	// usando variável do tipo normal (idade)
	printf("Análise SEM o uso de ponteiro!!!\n");
	printf("O ENDEREÇO é: %X\t  --  Não está certo; claro que não, pois não é um ponteiro\n", idade);
	printf("O ENDEREÇO é: %X\t  --  Correto; mesmo não sendo ponteiro, & permite mostrar o endereço\n", &idade);
  	// printf("O VALOR é   : %d \n", *idade); dará ERRO, pois não é ponteiro
  	printf("O VALOR é   : %d\t  --  Correto; conteúdo da variável idade sendo mostrada\n", idade);   
  
  	printf("\n\n");
  
  	var_ponteiro = &idade;  // O ENDEREÇO de idade vai para o PONTEIRO
  	
	printf("Análise COM o uso de ponteiro!!!\n");	  
	 // usando variável do tipo ponteiro (var_ponteiro)
  	printf("O ENDEREÇO é: %X\t  -  Correto; O ponteiro possui o ENDEREÇO da variável idade\n", var_ponteiro);
  	printf("O VALOR é   : %d\t  -  Perceba, acesso à variável idade por meio do ponteiro\n", *var_ponteiro);   
}

void main()
{
	setlocale(LC_ALL, "portuguese");
	system("cls");
	printf("USO DE PONTEIROS\n");
	printf("--- -- ---------");
	printf("\n\n""");
  	MostraResultado();
}
