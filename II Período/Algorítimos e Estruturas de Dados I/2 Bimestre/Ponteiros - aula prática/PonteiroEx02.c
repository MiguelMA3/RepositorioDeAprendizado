/* Objetivo do Programa: Exemplo b�sico do uso de ponteiros em C
Nome do Programa.......: PonteiroEx02.c
*/

#include <stdio.h>
#include <locale.h>

void MostraResultado()
{
	int idade = 25;
  	int *var_ponteiro; 
	/* outras maneira de declarar uma vari�vel ponteiro:
	int* var_ponteiro; 
	int * var_ponteiro;
	*/
  
  	// usando vari�vel do tipo normal (idade)
	printf("An�lise SEM o uso de ponteiro!!!\n");
	printf("O ENDERE�O �: %X\t  --  N�o est� certo; claro que n�o, pois n�o � um ponteiro\n", idade);
	printf("O ENDERE�O �: %X\t  --  Correto; mesmo n�o sendo ponteiro, & permite mostrar o endere�o\n", &idade);
  	// printf("O VALOR �   : %d \n", *idade); dar� ERRO, pois n�o � ponteiro
  	printf("O VALOR �   : %d\t  --  Correto; conte�do da vari�vel idade sendo mostrada\n", idade);   
  
  	printf("\n\n");
  
  	var_ponteiro = &idade;  // O ENDERE�O de idade vai para o PONTEIRO
  	
	printf("An�lise COM o uso de ponteiro!!!\n");	  
	 // usando vari�vel do tipo ponteiro (var_ponteiro)
  	printf("O ENDERE�O �: %X\t  -  Correto; O ponteiro possui o ENDERE�O da vari�vel idade\n", var_ponteiro);
  	printf("O VALOR �   : %d\t  -  Perceba, acesso � vari�vel idade por meio do ponteiro\n", *var_ponteiro);   
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
