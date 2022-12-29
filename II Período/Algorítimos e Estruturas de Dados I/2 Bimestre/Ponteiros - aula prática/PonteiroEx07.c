/* Objetivo do Programa: Trabalhando STRUCTS com ponteiros em C
Nome do Programa.......: PonteiroEx07.c
*/

#include<stdio.h>
#include <locale.h>

struct produto
{
   int codigo;
   float valor;
   char descricao[44];
};

void main()
{
	struct produto p1 = {3012,6.3, "Arroz Thuthuca"};
   	struct produto *ponteiro = &p1;
   	
   		setlocale(LC_ALL, "portuguese");
	system("cls");
	printf("USO DE PONTEIROS\n");
	printf("--- -- ---------");
	printf("\n\n""");

   	printf("Trabalhando struct com ponteiro\n\n");
   	printf("Código do produto    : %d\n",ponteiro->codigo);
   	printf("Valor do produto (R$): %0.1f\n",ponteiro->valor);
   	printf("Descrição do produto : %s\n",ponteiro->descricao);
}

