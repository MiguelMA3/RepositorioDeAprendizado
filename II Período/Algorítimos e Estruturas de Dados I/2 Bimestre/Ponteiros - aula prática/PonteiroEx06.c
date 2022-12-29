/* Objetivo do Programa: Retornando parâmetro com ponteiro em C
Nome do Programa.......: PonteiroEx06.c
*/

#include <stdio.h>
#include <locale.h>

int* Alterar_Conteudo()
{
  static int aux = 3344;
  return (&aux); // retornando um endereço de memória
}

void main()
{
	int* p;
	
	setlocale(LC_ALL, "portuguese");
	system("cls");
	printf("USO DE PONTEIROS\n");
	printf("--- -- ---------");
	printf("\n\n""");
		
	p = Alterar_Conteudo();
	printf("Retornando parâmetro via ponteiro\n\n");
	printf("ENDEREÇO é: %X\n", p);
	printf("CONTEÚDO é: %d\n", *p);
}

