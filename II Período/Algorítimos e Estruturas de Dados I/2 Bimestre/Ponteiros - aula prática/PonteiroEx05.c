/* Objetivo do Programa: Passagem de par�metros utilizando ponteiros em C
Nome do Programa.......: PonteiroEx05.c
*/

#include <stdio.h>
#include <locale.h>

// sinalizando ao compilador que a fun��o vir� ap�s a fun��o main()
void Mostrar(int *val);

void main () 
{
	int idade = 30;

	setlocale(LC_ALL, "portuguese");
	system("cls");
	printf("USO DE PONTEIROS\n");
	printf("--- -- ---------");
	printf("\n\n""");

	/* Chamar a fun��o Mostrar(), enviando como par�metro
	   o ENDERE�O da vari�vel idade
	*/
	
	printf("CONTE�DO da vari�vel idade �: %d\n",idade);
	printf("\n\n");
	Mostrar(&idade);
		
   	printf("Passagem de par�metro usando PONTEIRO: \n");
   	printf("CONTE�DO da vari�vel idade �: %d\n",idade);
}

void Mostrar(int *aux_idade) 
{
   *aux_idade = 12;
}
