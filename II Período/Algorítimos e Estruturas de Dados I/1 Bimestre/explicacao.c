#include <stdio.h>
#include <locale.h>
#include <stdlib.h> //inlcui as bibliotecas stdio(input/output), locale(acentua��o), stdlib(funcao geral com algumas utilidades)

int main() { // funcao principal, a primeira a ser executada independente da posi��o
	
	setlocale(LC_ALL, "portuguese"); //define o programa para portugu�s
	
	//definir as vari�veis
	char nome[52]; // [quantidade de caracteres]
	int idade;
	float peso, salario; // em portugu�s = 0,0 ; em ingl�s = 0.0
	
	system("cls"); //limpa tela
	
	printf("Nome da pessoa: "); //mostra no console
	scanf("%s", nome); //l� o que o usu�rio escreveu e armazena na vari�vel do tipo string(%s)
	
	printf("\n");
	fflush(stdin); //limpa o buffer(mem�ria) do teclado
	printf("Idade: ");
	scanf("%d", &idade);
	
	printf("\n");
	fflush(stdin);
	printf("Peso: ");
	scanf("%f", &peso);
	
	printf("\n");
	fflush(stdin);
	printf("Sal�rio: ");
	scanf("%f", &salario);
	
	system("cls");
	printf("\n===== | Perfil | =====");
	printf("\nNome: %s", nome);
	printf("\nIdade: %d", idade);
	printf("\nPeso: %.2f", peso);
	printf("\nSal�rio: %.2f", salario);
	
	return 0;
}
