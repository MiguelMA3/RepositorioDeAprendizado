#include <stdio.h>
#include <locale.h>

void main () {
	setlocale(LC_ALL, "Portuguese");
	
	FILE *arq = fopen("exerc01.txt", "w");
	fclose(arq);
	
	printf("Verifique se o arquivo 'exerc01.txt foi criado na Pasta.");
	
}
