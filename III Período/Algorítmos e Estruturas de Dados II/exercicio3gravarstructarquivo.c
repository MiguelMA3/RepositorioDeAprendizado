#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct {
	char nome[55];
	int idade;
	char sexo;
	
} Aluno;

int main(){
	setlocale(LC_ALL, "Portuguese");
	FILE *arq = fopen("arqTexto.txt", "w");
	
	struct Aluno aluno1, aluno2, aluno3;
	
	fprintf(arq, "%s %d %c\n", aluno1.nome, aluno1.idade, aluno1.sexo);
	fprintf(arq, "%s %d %c\n", aluno2.nome, aluno2.idade, aluno2.sexo);
	fprintf(arq, "%s %d %c\n", aluno3.nome, aluno3.idade, aluno3.sexo);
	
	fclose(arq);
	
	return 0;
}
