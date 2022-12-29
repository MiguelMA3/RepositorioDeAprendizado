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
	
	Funcionario func; // Evite usar, no código, o nome direto da STRUCT, ude um "nickname" ou cópia
	
	printf("Tamanho em bytes da structure Funcionário: %d \n", sizeof(func));
	
	func.codigo = 1212;
	strcpy(func.nome, "Ana Beatriz");
	func.salario = 4214.56;
	
	printf("\nCódigo : %d", func.codigo);
	printf("\nNome   : %s", func.nome);
	printf("\nSalário: %.2f", func.salario);
	
}
