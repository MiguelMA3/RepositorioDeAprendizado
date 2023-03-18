#include <stdio.h>
#include <locale.h>

void main()
{
	setlocale(LC_ALL, "Portuguese");
	printf("Exercício 2 -");
	printf("Ler e mostrar na tela o conteúdo do arquivo\n");	
	
	FILE *arq = fopen("ArquivoDeGravacao.txt", "r");
	
	char c;
	
	printf("\nConteúdo do arquivo:\n");
	
	if (arq == NULL) {
		printf("Houve um problema na abertura do arquivo\n");
		return;
	}
	
	while (c != EOF)
    {
        printf ("%c", c);
        c = fgetc(arq);
    }

	fclose(arq);
}
