/* Objetivo do Programa: Retornando par�metro com ponteiro em C
Nome do Programa.......: PonteiroEx06.c
*/

#include <stdio.h>
#include <locale.h>

int* Alterar_Conteudo()
{
  static int aux = 3344;
  return (&aux); // retornando um endere�o de mem�ria
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
	printf("Retornando par�metro via ponteiro\n\n");
	printf("ENDERE�O �: %X\n", p);
	printf("CONTE�DO �: %d\n", *p);
}

