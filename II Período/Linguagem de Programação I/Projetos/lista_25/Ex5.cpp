#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	int numSala, capacidade, alunosMat;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("\nDigite o n�mero da sala: ");
	scanf("%d", &numSala);
	
	printf("\nDigite a capacidade da sala: ");
	scanf("%d", &capacidade);
	
	printf("\nDigite a quantidade de alunos matriculados: ");
	scanf("%d", &alunosMat);
	
	if (alunosMat >= capacidade) {
		system("cls");
		printf("\nSALA:       %d", numSala);
		printf("\nCAPACIDADE: %d", capacidade);
		printf("\nOCUPA��O:   %d", alunosMat);
		printf("\nSALA LOTADA!");
	} else if (alunosMat <= capacidade) {
		system("cls");
		printf("\nSALA:       %d", numSala);
		printf("\nCAPACIDADE: %d", capacidade);
		printf("\nOCUPA��O:   %d", alunosMat);
		printf("\nH� VAGAS NA SALA!");
	}
	
}
