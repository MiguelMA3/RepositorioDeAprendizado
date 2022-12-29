/* Objetivo do Programa: Passagem de parâmetros utilizando ponteiros em C
Nome do Programa.......: PonteiroEx05.c
*/

#include <stdio.h>
#include <locale.h>

// sinalizando ao compilador que a função virá após a função main()
void Mostrar(int *val);

void main () 
{
	int idade = 30;

	setlocale(LC_ALL, "portuguese");
	system("cls");
	printf("USO DE PONTEIROS\n");
	printf("--- -- ---------");
	printf("\n\n""");

	/* Chamar a função Mostrar(), enviando como parâmetro
	   o ENDEREÇO da variável idade
	*/
	
	printf("CONTEÚDO da variável idade é: %d\n",idade);
	printf("\n\n");
	Mostrar(&idade);
		
   	printf("Passagem de parâmetro usando PONTEIRO: \n");
   	printf("CONTEÚDO da variável idade é: %d\n",idade);
}

void Mostrar(int *aux_idade) 
{
   *aux_idade = 12;
}
