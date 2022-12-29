/* Descobrir quantos bytes uma variável ocupa na memória*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
	int v1 = 10; // inteiro
	short int v2 = 10; // inteiro curto
	long int v3 = 10; // inteiro longo
	
	printf("\nUm INT       ocupa %d Bytes.", sizeof(v1));
	printf("\nUm SHORT INT ocupa %d Bytes", sizeof(v2));
	printf("\nUm LONG INT  ocupa %d Bytes", sizeof(v3));
	printf("\n");
	
	system("pause");
	
}
