#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

typedef struct {
	char nome[20];
	int idade;
	char sexo;
} Aluno;

// Pedro Alves 33 Masculino
// Adriana Silva 18 Feminino

void main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Exercício 3 - ");
	printf("Gravar conteúdo de uma struct no arquivo\n");
	
	FILE *arq = fopen("arqTexto.txt", "w");

	if (arq == NULL) {
		exit(0);
	}
	
	Aluno aluno[5];
	
	strcpy(aluno[0].nome, "Tico Rodrigues");
	aluno[0].idade = 28;
	aluno[0].sexo = 'M';
	
	strcpy(aluno[1].nome, "Teco Vasser");
	aluno[1].idade = 32;
	aluno[1].sexo = 'M';
	
	strcpy(aluno[2].nome, "Tifany Molly");
	aluno[2].idade = 20;
	aluno[2].sexo = 'F';
	
	strcpy(aluno[3].nome, "Pedro Alves");
	aluno[3].idade = 33;
	aluno[3].sexo = 'M';
	
	strcpy(aluno[4].nome, "Adriana Silva");
	aluno[4].idade = 18;
	aluno[4].sexo = 'F';
	
	int i;
	for (i = 0; i < 5; i++) {
		fprintf(arq, "%s %d %c\n", aluno[i].nome, aluno[i].idade, aluno[i].sexo);
	};
	
	printf("\nCheque o arquivo na pasta atual.");
	fclose(arq);
}
