#include <stdio.h>
#include <locale.h>

void main() {
	setlocale(LC_ALL, "Portuguese");
	
	printf("Exerc�cio 1 - ");
	printf("Gravar conte�do no arquivo\n");
	
	FILE *arq = fopen("ArquivoDeGravacao.txt","w");
	
	fputs("Olha s�! Estou escrevendo.", arq);
	
	fclose(arq);
	
	printf("Veja o que escrevi no arquivo <ArquivoDeGravacao.txt>");
	
}
