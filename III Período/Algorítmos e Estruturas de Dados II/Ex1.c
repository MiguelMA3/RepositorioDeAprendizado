#include <stdio.h>
#include <locale.h>

void main() {
	setlocale(LC_ALL, "Portuguese");
	
	printf("Exercício 1 - ");
	printf("Gravar conteúdo no arquivo\n");
	
	FILE *arq = fopen("ArquivoDeGravacao.txt","w");
	
	fputs("Olha só! Estou escrevendo.", arq);
	
	fclose(arq);
	
	printf("Veja o que escrevi no arquivo <ArquivoDeGravacao.txt>");
	
}
