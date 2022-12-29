#include <stdio.h>
#include <locale.h>
#include <stdlib.h> //inlcui as bibliotecas stdio(input/output), locale(acentuação), stdlib(funcao geral com algumas utilidades)

int main() { // funcao principal, a primeira a ser executada independente da posição
	
	setlocale(LC_ALL, "portuguese"); //define o programa para português
	
	//definir as variáveis
	char nome[52]; // [quantidade de caracteres]
	int idade;
	float peso, salario; // em português = 0,0 ; em inglês = 0.0
	
	system("cls"); //limpa tela
	
	printf("Nome da pessoa: "); //mostra no console
	scanf("%s", nome); //lê o que o usuário escreveu e armazena na variável do tipo string(%s)
	
	printf("\n");
	fflush(stdin); //limpa o buffer(memória) do teclado
	printf("Idade: ");
	scanf("%d", &idade);
	
	printf("\n");
	fflush(stdin);
	printf("Peso: ");
	scanf("%f", &peso);
	
	printf("\n");
	fflush(stdin);
	printf("Salário: ");
	scanf("%f", &salario);
	
	system("cls");
	printf("\n===== | Perfil | =====");
	printf("\nNome: %s", nome);
	printf("\nIdade: %d", idade);
	printf("\nPeso: %.2f", peso);
	printf("\nSalário: %.2f", salario);
	
	return 0;
}
