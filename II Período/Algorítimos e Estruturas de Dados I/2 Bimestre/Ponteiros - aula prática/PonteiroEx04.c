/* Objetivo do Programa: Trabalhando array com ponteiro em C
Nome do Programa.......: PonteiroEx04.c
*/

#include <stdio.h>
#include <locale.h>

void main () 
{
	int a;
	int vetor_valores[4] = {141, 1, 45, 100};
   	int *ponteiro_para_vetor_valores;
   	ponteiro_para_vetor_valores = vetor_valores;

	setlocale(LC_ALL, "portuguese");
	system("cls");
	printf("USO DE PONTEIROS\n");
	printf("--- -- ---------");
	printf("\n\n""");

   	for (a = 0; a < 4; a++) 
	{
  		printf("CONTEÚDO de vetor_valores[%d] = %d\n", a, *ponteiro_para_vetor_valores);
  		printf("ENDEREÇO de vetor_valores[%d] = %X\n", a, ponteiro_para_vetor_valores);
  		printf("ENDEREÇO de vetor_valores[%d] = %X\n", a, &vetor_valores[a]);
  		printf("\n");
  		ponteiro_para_vetor_valores++; // incrementing the pointer variable!
   }

}

