#include <stdio.h>
#include <locale.h>

void main()
{
	setlocale(LC_ALL, "Portuguese");
	printf("Exerc�cio 2 -");
	printf("Ler e mostrar na tela o conte�do do arquivo\n");	
	
	FILE *arq = fopen("ArquivoDeGravacao.txt", "r");
	
	char c;
	
	printf("\nConte�do do arquivo:\n");
	
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
