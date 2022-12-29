#include <stdio.h>
#include <string.h>
#include <locale.h>

typedef struct {
	int codigo;
	char nome[40];
	float salario;
} Funcionario;

void main(){
	setlocale(LC_ALL, "Portuguese");
	
	Funcionario func; // Evite usar, no c�digo, o nome direto da STRUCT, ude um "nickname" ou c�pia
	
	printf("Tamanho em bytes da structure Funcion�rio: %d \n", sizeof(func));
	
	func.codigo = 1212;
	strcpy(func.nome, "Ana Beatriz");
	func.salario = 4214.56;
	
	printf("\nC�digo : %d", func.codigo);
	printf("\nNome   : %s", func.nome);
	printf("\nSal�rio: %.2f", func.salario);
	
}
